#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
ll gcd(ll a,ll b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t=1;
    cin >> t;
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
        ll arr[n];
        ll p=k;
        ll d=k;
        for (ll i = 0; i < n; ++i)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        ll ans=0;
        ll res=0;
        ll i = (n-1-k);
        ll j=n-1;
        for (; i>=0&&p>0; --i,j--,p--)
        {
            res+=(arr[i]/arr[j]);
        }
        while(i>=0)
        {
            res+=arr[i--];
        }
        cout<<(res)<<endl;        
    }
    return 0;
}