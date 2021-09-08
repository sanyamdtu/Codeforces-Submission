#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 998244353
ll fac[1000000];
int main(){
	ll y=1;
	for (ll i = 1; i <1000000 ; ++i)
	{
		y=(y*i)%mod;
		fac[i]=y;
	
	}
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll arr[n];
		for (ll i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n,greater<ll>());
		ll a=1,b=0;
		for (ll i = 1; i < n; ++i)
		{
			if(arr[i]==arr[i-1])
				a++;
			else
			{
				b=arr[i];
				break;
			}
		}
		if(a==1)
		{
			if(arr[0]>b+1){
				cout<<0<<endl;
			}
			else{

				ll c=0;
				for (ll i = 0; i < n; ++i)
				{
					if(arr[i]==b){
						c++;
					}
				}
				b=c;
				ll ans=(fac[b]*b)%mod;
				for (ll i = b+2; i <=n; ++i)
				{
					ans=(ans*i)%mod;
				}
				cout<<ans<<endl;
			}
		}
		else{			
			cout<<fac[n]<<endl;
		}
	}
	
}