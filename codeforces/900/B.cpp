#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
int main(){
   int a,b;
   char ch;
   cin>>a>>b>>ch;
   int i=1;
   a=a%b;

   unordered_map<int,int> m;
   while(m[a]==0&&a>0){
      m[a]++;
      a=a*10;
      int c=a/b;
      string p=to_string(c);
      for(auto j:p){
         if(j==ch){
            cout<<i;
            return 0;
         }
         i++;
      }
      a%=b;
   }
   if(a==0&&ch=='0')
      cout<<i;
   else
   cout<<-1;

}
