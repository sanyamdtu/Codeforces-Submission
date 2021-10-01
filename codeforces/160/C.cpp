#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
int main()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  ll n,k;
  cin>>n>>k;
  ll arr[n];
  unordered_map<ll,ll> m,idx;
  for (ll i = 0; i < n; ++i)
  {
    cin>>arr[i];
    m[arr[i]]++;
  }
  sort(arr,arr+n);
  for (ll i = 0; i < n; ++i)
  {
    if(idx.find(arr[i])==idx.end())
      idx[arr[i]]=i;
  }
  ll a=arr[(k-1)/n];
  k-=idx[a]*n;
  ll b;
  if(k>0){
    ll j = 0;
    ll c=m[a];
    for (; j < n&&k>0; ++j)
    {
      k-=c;
    }
    b=arr[j-1];
  }
  else
    b=arr[n-1];  
  cout<<a<<" "<<b;
}