#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
int main(){
  ll n,m;
  cin>>n>>m;
  unordered_map<int,int> x,y;
  ll ans=n*n;
  // cout<<ans<<endl;
  for (int i = 0; i < m; ++i)
  {
      int a,b;
      cin>>a>>b;
      
      if(x[a]==0){
        ans-=(n-y.size());
      }
      x[a]++;
      if(y[b]==0){
        ans-=(n-x.size());
      }
      y[b]++;
      cout<<ans<<" ";
  }

}