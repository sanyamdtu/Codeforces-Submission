#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
int main()
{
    ll t=1;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s=to_string(n);
        if(n%2==0){
            cout<<0<<endl;
            continue;
        }
        ll f=-1;
        for (ll i = s.length()-1; i >=0; --i)
        {
            if((s[i]-'0')%2==0)
                f=i;
        }
        if(f==-1){
            cout<<f<<endl;
            continue;
        }
        if(f==0)
        {
            cout<<1<<endl;
            continue;
        }
        cout<<2<<endl;
    }
}
 