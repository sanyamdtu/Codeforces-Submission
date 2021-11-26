#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
struct node {
    ll i,v;
};
bool comp(node &a,node &b){
    return a.v>b.v;
}
int main()
{
    ll t=1;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        node arr[n];
        for (ll i = 0; i < n; ++i)
        {
            cin>>arr[i].v;
            arr[i].i=i;
        }
        sort(arr,arr+n,comp);
        ll ans[n+1];
        ans[0]=0;
        ll i = 0,x=1,c=0;
        // ll ans=0;
        for (; i < n; i+=2)
        {
            c+=2*arr[i].v*x;
            ans[arr[i].i+1]=x;
            if(i+1<n){
                c+=2*arr[i+1].v*x;
                ans[arr[i+1].i+1]=-x;
            }
            x++;
        }
        cout<<c<<endl;
        for (ll i = 0; i < n+1; ++i)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}
 