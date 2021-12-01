#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod  99824435
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        sort(s.begin(), s.end());
        if(k==1){
            cout<<s<<endl;
            continue;
        }
        
        string arr[k];
        int i=0;
        int f=0;
        while(1){
            if(i==n)
                break;
            if(f==0){
                for (int j = 0; j <k&&i<n ; ++j,i++)
                {
                    arr[j]+=s[i];
                }
            }
            else{
                for (int j = k-1; j>=0&&i<n ; --j,i++)
                {
                    arr[j]+=s[i];
                }
            }
        }
        string ans=arr[0];
        for (int i = 0; i < k; ++i)
        {
            ans=max(ans,arr[i]);
        }
        string p[k];
        i=0;
        int j = 0;
        for (; j<k&&i<n;++j,i++)
        {
            p[j]+=s[i];
        }
        while(j<n){
            p[0]+=s[j++];
        }
        ans=min(ans,max(p[0],p[k-1]));
        cout<<ans<<endl;
    }
}
 