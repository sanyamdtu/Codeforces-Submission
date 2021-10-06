#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod=998244353;
ll p(ll a,ll b){
   if(b<=0)
      return 1;
   ll c=p(a,b/2);
   c=(c*c)%mod;
   if(b%2==1)
      c=(c*a)%mod;
   return c;
}
int main(){
   ll n,m;
   cin>>n>>m;
   ll fac[300000];
   fac[1]=1;
   for (ll i = 2; i <=m; ++i)
   {
      fac[i]=(fac[i-1]*i)%mod;
   }
   ll ans=fac[m];
    ans=(ans*(n-2))%mod;
    ans=(ans*p(2,n-3))%mod;
    ll div=(fac[n-1]*fac[m-n+1])%mod;
    div=p(div,mod-2)%mod;
    ans=(ans*div)%mod;
   cout<<ans;

}
