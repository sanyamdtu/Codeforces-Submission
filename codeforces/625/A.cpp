#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 998244353
#define INF 1e18
typedef  long long ll;

int main()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  ll n,a,b,c;
  cin>>n>>a>>b>>c;
  ll ans=n/a;
  ll p=n,ch=0;
  if(p>=b){
    ll temp=p-b;
    temp=temp/(b-c);
    ch+=temp+1;
    p-=(b-c)*(temp+1);
  }
  
  if(p>=a)
    ch+=p/a;
  cout<<max(ans,ch);
}