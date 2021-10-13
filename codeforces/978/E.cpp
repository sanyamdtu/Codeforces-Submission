#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   ll n,w;
   cin >> n>>w;
   ll arr[n];
   for (ll i = 0; i < n; ++i)
   {
      cin>>arr[i];
   }
   ll mini=INT64_MAX,maxi=INT64_MIN,s=0;
   for (ll i = 0; i < n; ++i)
   {
      s+=arr[i];
      mini=min(mini,s);
      maxi=max(maxi,s);
   }
   ll l=max((ll)0,-mini);
   ll r=min(w,w-maxi);
   if(mini<-w||maxi>w||(r-l+1)<0){
      cout<<0;
      return 0;
   }
   
   cout<<r-l+1;
}