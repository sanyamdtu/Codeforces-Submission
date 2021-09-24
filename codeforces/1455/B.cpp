#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      if(n==1)
         cout<<1;
      else if(n==2)
         cout<< 3;
      else if(n<=5)
         cout<<n-1;
      else{
         int i=1,a;
         while(1){
            a=(i*(i+1))/2;
            if(a>=n)
               break;
            i++;
         }
         if(a==n)
            cout<<i;
         else if(a==n+1)
            cout<<i+1;
         else
            cout<<i;
      }
      cout<<endl;
   }

}