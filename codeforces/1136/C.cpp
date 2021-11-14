#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
int main()
{
  ll t=1;
  // cin>>t;
  while(t--){
    ll n,m;
    cin>>n>>m;
    ll a[n][m],b[n][m];
    for (ll i = 0; i < n; ++i)
    {
      for (ll j = 0; j < m; ++j)
      {
        cin>>a[i][j];
      }
    }
    for (ll i = 0; i < n; ++i)
    {
      for (ll j = 0; j < m; ++j)
      {
        cin>>b[i][j];
      }
    }
    ll f=0;
    for(ll gap = 1;gap <= (n + m - 1); gap++)
    {
        ll l =  max((ll)0, gap - n);
        ll count = min(min(gap, (m - l)), n);
        vector<ll> p,q;
        for(ll j = 0; j < count; j++){
          p.push_back(a[min(n, gap) - j - 1][l + j]);
          q.push_back(b[min(n, gap) - j - 1][l + j]);
        }
        sort(p.begin(), p.end());
        sort(q.begin(), q.end());
        
        for (ll i = 0; i < p.size(); ++i)
        {
          if(p[i]!=q[i])
            f=1;
        }
    }
    if(f==0)
      cout<<"YES";
    else
      cout<<"NO";
    cout<<endl;
  }
}
 