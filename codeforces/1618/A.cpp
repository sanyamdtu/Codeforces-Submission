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
        ll b[7];
        for (int i = 0; i < 7; ++i)
        {
            cin>>b[i];
        }
        cout<<b[0]<<" ";
        cout<<b[1]<<" ";
        cout<<b[6]-b[0]-b[1];
        cout<<endl;
    }
    return 0;
}