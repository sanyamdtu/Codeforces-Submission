// sw
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define size 300000
int p[300000];
int main(){
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   for (ll i = 0; i < size; ++i)
    {
        p[i]=i;
    }
    for (ll i = 2; i < size; ++i)
    {
        if(p[i]==i){
            for (ll j = i*i; j < size; j+=i)
            {
                p[j]=i;
            }
        }
        
    }
   ll n;
   cin>>n;
   ll arr[n];
   for (ll i = 0; i < n; ++i)
   {
      cin>>arr[i];
   }
   unordered_map<ll,ll> m;
   unordered_map<ll,vector<ll>> pi;
   for (ll i = 0; i < n; ++i)
   {
      while(arr[i]>1)
      {
         ll c=0,pr=p[arr[i]];
         while(arr[i]%pr==0){
            arr[i]/=pr;
            c++;
         }
         if(c==0) 
            continue;
         m[pr]++;
         pi[pr].push_back(c);
      }
   }
   ll ans=1;
   for (auto i:m)
   {
      if(i.second==n-1){
         sort(pi[i.first].begin(), pi[i.first].end());
         ans*=pow(i.first,pi[i.first][0]);
      }
      else if(i.second==n){
         sort(pi[i.first].begin(), pi[i.first].end());
         ans*=pow(i.first,pi[i.first][1]);
      }
   }
   cout<<ans;
}
