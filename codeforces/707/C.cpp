#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
   ll n;
   cin>>n;
   if(n==1||n==2){
      cout<<-1<<endl;
      return 0;
   }
   if(n%2==0){
      ll c=n*n;
      c=c/4;
      c--;
      ll d=n*n;
      d=d/4;
      d++;
      cout<<c<<" "<<d;
   }
   else{;
      ll c=n*n;
      c--;
      c=c/2;
      ll d=n*n;
      d++;
      d=d/2;
      cout<<c<<" "<<d;
   }
   
}
