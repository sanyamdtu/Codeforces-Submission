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
    ll arr[n];
    ll a[n];
    for(ll i = 0 ; i < n; ++i)
    {
        cin>>arr[i];
        a[i]=arr[i];
    }
    ll c=n;
    sort(a,a+n);
    for (ll i = 0; i < n; ++i)
    {
      if(arr[i]!=a[i]){
        c=min(c,max(n-1-i,i));
      }
    }
    if(x>c&&c>0)
      cout<<"NO";
    else
      cout<<"YES";
    cout<<endl;

  }
}