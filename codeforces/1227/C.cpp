#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007

int main()
{
    ll t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<pair<int,int>> ans;
        for (int i = 0; i < n; ++i)
        {
            if(s[i]=='('){
                for (int j = i+1; j <n ; ++j)
                {
                    if(s[j]==')'){
                        if(i+1!=j)
                        ans.push_back({i+1,j});
                        reverse(s.begin()+i+1,s.begin()+j+1);
                        break;
                    }
                }
                i++;
            }
            else{
                for (int j = i+1; j <n ; ++j)
                {
                    if(s[j]=='('){
                        if(i!=j)
                        ans.push_back({i,j});
                        reverse(s.begin()+i,s.begin()+j+1);
                        break;
                    }
                }
                i--;
            }
        }
        // cout<<s<<endl;
        int c=n/2;
        for (int i = 1; i+1 < n&&c>k; i+=2,c--)
        {
            ans.push_back({i,i+1});    
        }
        cout<<ans.size()<<endl;
        for(auto i:ans)
            cout<<i.first+1<<" "<<i.second+1<<endl;

    }
}
 