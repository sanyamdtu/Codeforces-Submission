#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
int main()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  ll n,k,m;
  cin>>n>>k>>m;
  ll arr[n];
  for (int i = 0; i < n; ++i)
  {
    cin>>arr[i];
  }
  unordered_map<ll,vector<ll>> p;
  for (int i = 0; i < n; ++i)
  {
    p[arr[i]%m].push_back(arr[i]);
  }
  for(auto i:p){
    if(i.second.size()>=k){
      cout<<"Yes"<<endl;
      for (int j = 0; j < k; ++j)
      {
        cout<<i.second[j]<<" ";
      }
      return 0;
    }
  }cout<<"No";

}