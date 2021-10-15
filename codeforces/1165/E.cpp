#include <bits/stdc++.h>
using namespace std;
#define mod 998244353
typedef long long ll;
struct node{
   ll i,val;
};
bool comp(node &a,node &b){
   return a.val<b.val;
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   ll t=1;
   while(t--){
      ll n;
      cin>>n;
      ll a[n],b[n],c[n];
      node arr[n];
      for (ll i = 0; i < n; ++i)
      {
         cin>>a[i];
         a[i]=(a[i]*(i+1)*(n-i));
         arr[i]={i,a[i]};
         
      }
      for (ll i = 0; i < n; ++i){
         cin>>b[i];
      }
      sort(arr,arr+n,comp);
      sort(b,b+n,greater<ll>());
      for (int i = 0; i < n; ++i)
      {
         arr[i].val%=mod;
      }
      ll ans=0;
      for (ll i = 0; i < n; ++i)
      {
         // cout<<c[i]<<" "<<b[i]<<endl;
         ans=(ans+(arr[i].val*b[i])%mod)%mod;
      }
      cout<<ans<<endl;

   }
}