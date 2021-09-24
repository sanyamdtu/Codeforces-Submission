#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
int main(){
    int n,m;
    cin>>n>>m;
    string s[n];
    for (int i = 0; i < n; ++i)
    {
        cin>>s[i]; 
    }
    ll ans=1;
    for (int j = 0; j < m; ++j)
    {
        unordered_map<char,int> m;
        for (int i = 0; i < n; ++i)
        {
            m[s[i][j]]++;
        }
        ans=(ans*(ll)m.size())%mod;
    }
    cout<<ans;

}