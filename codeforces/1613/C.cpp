#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod  99824435
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n,h;
        cin>>n>>h;
        ll arr[n];
        for (ll i = 0; i < n; ++i)
        {
            cin>>arr[i];
        }
        ll lo=1,hi=h+3;
        ll ans=hi+3;
        while(lo<=hi){
            ll mid=lo+(hi-lo)/2;
            // cout<<mid<<" ";
            ll c=0,t=0;
            for (ll i = 0; i < n; ++i)
            {
                if(t<=arr[i]){
                    c+=mid;
                    t=arr[i]+mid;
                }
                else{
                    c-=t-arr[i];
                    c+=mid;
                    t=arr[i]+mid;
                }
            }
            // cout<<c<<"X ";
            if(c>=h){
                ans=min(ans,mid);
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        cout<<ans<<endl;
    }
}
    