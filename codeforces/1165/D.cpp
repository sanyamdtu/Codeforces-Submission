#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
int main(){
   ll t;
   cin>>t;
   while(t--){
      ll n;
      cin>>n;
      ll arr[n];
      for (ll i = 0; i < n; ++i)
      {
         cin>>arr[i];
      }
      sort(arr,arr+n);
      ll i = 0,j=n-1;
      ll a=-1;
      ll f=0;
      while( i < j)
      {
         ll b=arr[i]*arr[j];
         if(a==-1)
            a=b;
         else if(a!=b)
            f=1;
         ++i;
         --j;
      }
      if(n%2==1){
         ll p=n/2;
         ll b=arr[p]*arr[p];
         if(a==-1)
            a=b;
         else if(a!=b)
            f=1;
      }
      if(f==0){
         unordered_map<ll,ll> m;
         for (int i = 0; i < n; ++i)
         {
            m[arr[i]]++;
         }
         for (ll i = 2; i <=sqrt(a); ++i)
         {
            if(a%i==0&&(m[i]==0||m[(a/i)]==0)){
               // cout<<i;
               f=1;
               // break;
            }
         }
         if(f==0)
            cout<<a;
         else
            cout<<-1;
      }
      else
         cout<<-1;
      cout<<endl;
   }

}