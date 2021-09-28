#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
int main(){
  ll b;
  cin>>b;
  unordered_map<ll,ll> m;
  for (ll i = 1; i <=sqrt(b); ++i)
  {
    if(b%i==0){
      m[i]++;
      m[(b/i)]++;
    }
  }
  cout<<m.size();
}