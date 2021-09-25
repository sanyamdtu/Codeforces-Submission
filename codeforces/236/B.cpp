#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1073741824 
int main(){
   int a,b,c;
   cin>>a>>b>>c;
   vector<int> v={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
   ll ans=0;
   for (int i = 1; i <= a; ++i)
   {
      for (int j = 1; j <=b; ++j)
      {
         for (int k = 1; k <= c; ++k){
            ll a=i*j*k,p=1;
            for(auto l:v){
               ll c=0;
               while((a%l==0)&&a>1){
                  a=a/l;
                  c++;
               }
               p=p*(c+1);
            }
            // cout<<p<<endl;
            ans+=p;
         }
      }
   }
   cout<<ans;
   
}
