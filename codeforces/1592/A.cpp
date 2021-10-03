#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
int main(){
   ll t;
   cin>>t;
   while(t--){
    ll n,h;
     cin>>n>>h;
     ll arr[n];
     for (ll i = 0; i < n; ++i)
     {
       cin>>arr[i];
     }
     sort(arr,arr+n,greater<ll>());
     ll ans=(h/(arr[0]+arr[1]));
     ans=ans*2;
     h=(h%(arr[0]+arr[1]));
     int f=0;
     while(h>0){
        h-=arr[f];
        f=1-f;
        ans++;
     }
     cout<<ans<<endl;
   }
   
   

}
