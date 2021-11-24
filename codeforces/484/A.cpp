#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
    
ll func(ll l,ll r){
    if(l==r)
        return l;
    ll k = (ll)(log2(r));
    ll p= (ll) 1 << k;

    if(p<=l)
        return func(l-p,r-p)+p;
    if(2*p-1<=r)
        return 2*p-1;    
    return p-1;
}
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll l,r;
        cin>>l>>r;
        cout<<func(l,r)<<endl;
    }
}
 