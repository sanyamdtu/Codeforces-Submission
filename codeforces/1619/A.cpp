#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        if(n%2==1)
            cout<<"NO";
        else{
            string a=s.substr(0,n/2);
            string b=s.substr(n/2);
            if(a==b)
                cout<<"YES";
            else
                cout<<"NO";
        }
        cout<<endl;

    }
    
}