#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t=1;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        n-=2;
        string s[n];
        for (int i = 0; i < n; ++i)
        {
            cin>>s[i];
        }
        string p="";
        p+=s[0][0];
        int f=0;
        for (int i = 1; i < n; ++i)
        {
            if(s[i-1][1]==s[i][0]){
                p+=s[i][0];
            }
            else{
                p+=s[i-1][1];
                p+=s[i][0];
                f=1;
            }
        }
        p+=s[n-1][1];
        if(f==0)
            p+='a';
        cout<<p<<endl;
    }
    return 0;
}