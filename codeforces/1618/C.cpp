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
        ll n;
        cin>>n;
        ll arr[n];
        for (ll i = 0; i < n; ++i)
        {
            cin>>arr[i];
        }
        ll f=0;
        for (ll i = 1; i < n; ++i)
        {
            if(arr[i-1]==arr[i]){
                f=1;
            }
        }
        if(f==1)
        {
            cout<<0<<endl;
            continue;
        }
        ll g=arr[0];
        for (ll i = 0; i < n; i+=2)
        {
            g=gcd(arr[i],g);
        }
        ll d=arr[1];
        for (ll i = 1; i < n; i+=2)
        {
            d=gcd(arr[i],d);
        }
        ll p=0;
        for (ll i = 1; i < n; ++i)
        {
            if(arr[i]%g==arr[i-1]%g){
                p=1;
            }
        }
        if(p==0){
            cout<<g<<endl;
            continue;
        }
        p=0;
        for (ll i = 1; i < n; ++i)
        {
            if(arr[i]%d==arr[i-1]%d){
                p=1;
            }
        }
        if(p==0){
            cout<<d<<endl;
            continue;
        }
        cout<<0<<endl;
    }
    return 0;
}