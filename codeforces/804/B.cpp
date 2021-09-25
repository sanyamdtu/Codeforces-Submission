#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
int main(){
   string s;
   cin>>s;
   ll b=0,n=s.length();
   ll ans=0;
   for (int i = n-1; i >=0; --i)
   {
      if(s[i]=='a'){
         ans=(ans+b)%mod;
         if(b!=0)
            b=(b*2)%mod;
      }
      else{
         b=(b+1)%mod;
      }
   }
   cout<<ans;

}
