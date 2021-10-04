#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
ll gcd(ll x,ll y){
   if(y==0)
      return x;
   if(x==0)
      return y;
   return gcd(y,x%y);
}
int main(){
   ll t=1;
   while(t--){
      int n,m;
      cin>>n>>m;
      ll a[n],b[m];
      
      for (int i = 0; i < n; ++i)
      {
         cin>>a[i];
      }
      for (int i = 0; i < m; ++i)
      {
         cin>>b[i];
      }
      if(n==1){
         for (int i = 0; i < m; ++i)
         {
            cout<<b[i]+a[0]<<" ";
         }
         continue;
      }
      ll g=a[1]-a[0];
      sort(a,a+n);
      for (int i = 1; i < n; ++i)
      {
         g=gcd(g,a[i]-a[0]);
      }
      for (int i = 0; i < m; ++i)
      {
         cout<<abs(gcd(g,a[0]+b[i]))<<" ";
      }
      cout<<endl;
   }
}
