#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod  99824435
int main()
{

    int t;
    cin>>t;
    while(t--){
        int m;
        cin>>m;
        int a[m+2],b[m+2];
        for (int i = 1; i < m+1; ++i)
        {
            cin>>a[i];
        }
        for (int i = 1; i < m+1; ++i)
        {
            cin>>b[i];
        }
        int pre[m+2][2];
        memset(pre,0,sizeof(pre));
        for (int i = 1; i < m+1; ++i)
        {
            pre[i][1]=pre[i-1][1]+b[i];
        }
        // pre[m][1]=b[m];
        for (int i = m; i >=1 ; --i)
        {
            pre[i][0]=pre[i+1][0]+a[i];
        }
        int ans=INT_MAX;
        for (int i = 1; i <= m; ++i)
        {
            // cout<<pre[i][0]<<" "<<pre[i][1]<<endl;
            ans=min(ans,max(pre[i-1][1],pre[i+1][0]));
        }
        
        cout<<ans<<endl;
    }

}
 