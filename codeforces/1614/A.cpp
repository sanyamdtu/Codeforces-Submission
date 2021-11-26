#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
int main()
{
    ll t=1;
    cin>>t;
    while(t--){
       ll n,l,r,k;
       cin>>n>>l>>r>>k;
       // cout<<n<<l<<r<<k<<endl;
       ll arr[n];
       for (ll i = 0; i < n; ++i)
       {
           cin>>arr[i];
           // cout<<arr[i]<<" ";
       }
       sort(arr,arr+n);
       ll ans=0;
       for (ll i = 0; i < n; ++i)
       {
        // cout<<arr[i]<<" " ;
           if(arr[i]<=r&&arr[i]>=l&&arr[i]<=k){
                ans++;
                k-=arr[i];
           }
       }
       cout<<ans<<endl;
    }
}
 