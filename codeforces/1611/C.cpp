#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
int main()
{
    ll t=1;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        for (ll i = 0; i < n; ++i)
        {
            cin>>arr[i];
        }
        if(arr[0]!=n&&arr[n-1]!=n)
        {
            cout<<-1<<endl;
            continue;
        }
        deque<ll> ans;
        ll l = 0,r=n-1;
        for (; l <=r;)
        {
            if(arr[l]>arr[r]){
                ans.push_front(arr[l]);
                l++;
            }
            else{
                ans.push_back(arr[r]);
                r--;
            }
        }
        for(auto i:ans)
            cout<<i<<" ";
        cout<<endl;
    }
}
 