#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007

int main(){
   int n,a,b,k;
   cin>>n>>a>>b>>k;
   string s;
   cin>>s;
   int l=0,c=0;
   for (int r = 0; r < n; ++r)
   {
      if(s[r]=='0'){
         if(r-l+1==b){
            c++;
            l=r+1;
            // cout<<r<<" ";
         }
      }
      else{
         l=r+1;
      }
   }
   int shoot=c-a+1;
   cout<<shoot<<endl;
   for (int r=0,l=0; r < n&&shoot>0; ++r)
   {
      if(s[r]=='0'){
         if(r-l+1==b){
            cout<<r+1<<" ";
            shoot--;
            l=r+1;
         }
      }
      else{
         l=r+1;
      }
   }
}
