#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node{
    ll a,b;
};
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        node arr[n];
        for (ll i = 0; i < n; ++i)
        {
            cin>>arr[i].a>>arr[i].b;
        }
        ll ans=0,mn=INT64_MAX;
        for (ll i = 0; i < n; ++i)
        {
            ans+=max(arr[(i+1)%n].a-arr[i].b,ll(0));
            mn=min(mn,arr[(i+1)%n].a-max((ll)0,arr[(i+1)%n].a-arr[i].b));
        }
        cout<<ans+mn<<"\n";
    }

}