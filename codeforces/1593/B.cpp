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
      ll num;
      cin>>num;
      if(num%25==0)
      {
         cout<<0<<endl;
         continue;
      }
      string s=to_string(num);
      int n=s.length();
      int ans=n;

      for (int i = 0; i < n; ++i)
      {
         if(s[i]=='2'){
            int c=-1;
            for(int j=i+1;j<n;j++){
               if(s[j]=='5')
                  c=i;
            }
            if(c!=-1)
               ans=min(ans,n-i-2);
         }
         else if(s[i]=='5'){
            int c=-1;
            for(int j=i+1;j<n;j++){
               if(s[j]=='0')
                  c=i;
            }
            if(c!=-1)
               ans=min(ans,n-i-2);
         }
         else if(s[i]=='7'){
            int c=-1;
            for(int j=i+1;j<n;j++){
               if(s[j]=='5')
                  c=i;
            }
            if(c!=-1)
               ans=min(ans,n-i-2);
         }
         else if(s[i]=='0'){
            int c=-1;
            for(int j=i+1;j<n;j++){
               if(s[j]=='0')
                  c=i;
            }
            if(c!=-1)
               ans=min(ans,n-i-2);
         }
      }
      cout<<ans<<endl;
   }
}