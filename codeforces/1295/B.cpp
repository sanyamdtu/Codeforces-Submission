#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 998244353
#define INF 1e18
typedef  long long ll;
int main()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  ll t;
  cin>>t;
  while(t--){
    ll n,x;
    cin>>n>>x;
    string s;
    cin>>s;
    ll sum=0;
    for (ll i = 0; i < n; ++i)
    {
      if(s[i]=='1'){
        sum--;
      }
      else
        sum++;
    }
    ll ans=0;
    ll y=0;
    ll f=0;
    for (ll i = 0; i < n; ++i)
    {
      if(s[i]=='1')
        y--;
      else 
        y++;
      if(x==y)
        f=1;
    }
    if(f==1&&sum==0)
    {
      cout<<-1<<endl;
      continue;
    }
    y=0;
    for (ll i = 0; i < n; ++i)
    {
      if(i>=0){
        if(s[i]=='0')
          y++;
        else 
          y--;
      }
      ll c=(x-y);
      if((c>=0&&sum>=0)||(c<=0&&sum<=0)){
        ll a=abs(c);
        ll b=abs(sum);
        if(sum==0){
          if(c==0)
            ans++;
        }
        else if((a%b)==0)
          ans++;
      }
    }
    if(x==0)
      ans++;
    cout<<ans<<endl;
  }
}