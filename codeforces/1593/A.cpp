#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   int t;
   cin>>t;
   while(t--){
      ll a,b,c;
      cin>>a>>b>>c;
      ll maj=max(a,max(b,c))+1;
      if(a>b&&a>c)
         cout<<0<<" ";
      else
         cout<<maj-a<<" ";
      if(b>a&&b>c)
         cout<<0<<" ";
      else
         cout<<maj-b<<" ";
      if(c>b&&c>a)
         cout<<0;
      else
         cout<<maj-c<<" ";
      cout<<endl;
   }
}