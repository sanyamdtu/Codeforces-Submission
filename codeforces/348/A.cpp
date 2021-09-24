#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
int main(){
   ll t=1;
   while(t--){
      int n;
      cin>>n;
      ll arr[n];
      ll lo=0,hi=0;
      for (int i = 0; i < n; ++i)
      {
         cin>>arr[i];
         lo=max(lo,arr[i]);
         hi+=arr[i];
      }
      ll ans=hi;
      while(lo<=hi){
         ll mid=lo+(hi-lo)/2;
         ll c=0;
         for (int i = 0; i < n; ++i)
         {
            c+=mid-arr[i];
         }
         if(c>=mid){
            ans=mid;
            hi=mid-1;
         }
         else{
            lo=mid+1;
         }
      }
      cout<<ans<<endl;
   }

}