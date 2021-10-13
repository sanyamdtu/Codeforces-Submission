#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a,ll b){
   if(b==0)
      return a;
   return gcd(b,a%b);
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      int arr[n];
      for (int i = 0; i < n; ++i)
      {
         cin>>arr[i];
      }
      sort(arr,arr+n);
      int f=0;
      for (int i = 1; i < n; ++i)
      {
         if(arr[i]!=arr[i-1])
            f=1;
      }
      if(f==0){
         cout<<-1<<endl;
         continue;
      }

      ll g=arr[n-1]-arr[0];
      for (int i = 0; i < n; ++i)
      {
         for (int j = i+1; j < n; ++j)
         {
            g=gcd(g,arr[j]-arr[i]);
         }
      }
      cout<<g<<endl;
      
   }
}