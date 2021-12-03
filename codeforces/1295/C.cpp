#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod  99824435
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        unordered_map<char,vector<int>> m;
        unordered_map<char,int> p;
        vector<int> arr;
        for (int i = 0; i < s.length(); ++i)
        {
            m[s[i]].push_back(i);
        }
        for(auto i:t)
            p[i]++;
        int f=0;
        for(auto i:p)
        {
            if(m[i.first].size()==0)
            {
                f=-1;
            }
        }
        if(f==-1)
        {
            cout<<f<<endl;
            continue;
        }
        int ans=1,curr=0;
        for (int i = 0; i < t.length(); ++i)
        {
            jump:
            auto it=lower_bound(m[t[i]].begin(), m[t[i]].end(),curr);
            if(it==m[t[i]].end()){
                curr=0;
                ans++;
                goto jump;
            }
            else{
                int idx=it-m[t[i]].begin();
                curr=m[t[i]][idx]+1;
            }
        }
        cout<<ans<<endl;
    }
}
 