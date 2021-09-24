#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
int main(){
   int t;
   cin>>t;
   while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int d=0;
        for (int i = n-1; i >=1; --i)
        {
            if((y-x)%i==0){
                d=(y-x)/i;
                break;
            }
        }
        int a=y;
        while(n>0&&a>0){
            cout<<a<<" ";
            a-=d;
            n--;
        }
        a=y+d;
        while(n>0){
            cout<<a<<" ";
            a+=d;
            n--;
        }
        cout<<endl;
   }

}