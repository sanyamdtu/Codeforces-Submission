#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod  99824435
int main()
{

    ll n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    ll dp[n+1][6];
    memset(dp,0,sizeof(dp));
    string map[]={"abc","cba","cab","acb","bac","bca"};
    memset(dp,0,sizeof(dp));
    for (ll i = 1; i < n+1; ++i)
    {
        for (ll j = 0; j < 6; ++j)
        {
            
            if(map[j][i%3]==s[i-1]){
                dp[i][j]=dp[i-1][j];
            }
            else{
                dp[i][j]=dp[i-1][j]+1;
            }
            // cout<<dp[i][j]<<" ";
        }
        // cout<<endl;

    }
    for (ll i = 0; i < m; ++i)
    {
        ll l,r;
        cin>>l>>r;
        ll ans=INT_MAX;
        for (ll j = 0; j < 6; ++j)
        {
            ans=min(ans,dp[r][j]-dp[l-1][j]);
        }
        cout<<ans<<endl;
    }
}
 