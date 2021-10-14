#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
ll power(ll x, ll y)
{
    if (y == 0)
        return 1;
   ll k=(power(x, y / 2))%mod;
   if (y % 2 == 0)
        return ( k*k )%mod;
    else
        return ((x%mod) * ((k * k)%mod))%mod;
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   ll t=1;
   while(t--){
      ll n,x;
      cin>>x>>n;
      ll p=x;
      vector<ll> v;
      for(ll i=2; i*i<=p; i++)
       {

           if(p%i==0)
           {
               v.push_back(i);
               while(p%i==0)
               {
                   p/=i;
               }
           }
       }
      if(p>1)
         v.push_back(p);
      ll ans=1;
      for(auto i:v){
         for (ll j=i;;j*=i)
         {
            ans=ans*power(i,n/j)%mod;
            if (n/j<i)
               break;
         }
      }
      cout<<ans;
   }
}