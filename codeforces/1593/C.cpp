#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   int t;
   cin>>t;
   while(t--){
      
      ll n,k;
      cin>>n>>k;
      ll arr[k];
      for (ll i = 0; i < k; ++i)
      {
         cin>>arr[i];
      }
      sort(arr,arr+k,greater<ll>());
      ll ans=0;
      ll r=0;
      for (ll i = 0; i < k; ++i)
      {
         if(arr[i]>r){
            ans++;
         }
         r+=n-arr[i];
      }
      cout<<ans<<endl;
   }
}