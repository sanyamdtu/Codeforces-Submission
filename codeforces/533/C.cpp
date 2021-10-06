#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
int main(){
   int a,b,c,d,f=0;
   cin>>a>>b>>c>>d;
   if((a+b)<=max(c,d))
      f=1;
   else if(a<=c&&b<=d)
      f=1;   
   if(f==1)
      cout<< "Polycarp";
   else
      cout<<"Vasiliy";
}
