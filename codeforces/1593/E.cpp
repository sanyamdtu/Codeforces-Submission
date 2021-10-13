#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        unordered_map<ll,ll> m;
        ll vis[n+1],dis[n+1];
        for (ll i = 0; i < n+1; ++i)
        {
            vis[i]=0;
            dis[i]=0;
        }
        vector<vector<ll>> g(n+1);
        for (ll i = 0; i < n-1; ++i)
        {
            ll a,b;
            cin>>a>>b;
            g[a].push_back(b);
            g[b].push_back(a);
            vis[a]++;
            vis[b]++;
        }
        queue<ll> q;
        for (ll i = 1; i < n+1; ++i)
        {
            if(vis[i]==1){
                q.push(i);
                vis[i]=-1;
            }
        }
        ll l=1;
        while(!q.empty()){
            ll size=q.size();
            while(size>0){
                auto a=q.front();
                // cout<<a<<" ";
                q.pop();
                dis[a]=l;
                for(auto i:g[a]){
                    if(vis[i]>0)
                        vis[i]--;
                    if(vis[i]==1){
                        q.push(i);
                        vis[i]=-1;
                    }
                }
                size--;
            }
            // cout<<endl;
            l++;
        }
        ll ans=0;
        for (ll i = 1; i < n+1; ++i)
        {
            if(dis[i]>k)
                ans++;
        }
        cout<<ans<<endl;
    }
}