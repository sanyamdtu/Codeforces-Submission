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
            ll n;
            cin>>n;
            ll arr[n];
            ll sum=0;
            for (ll i = 0; i < n; ++i)
            {
                cin>>arr[i];
                sum+=arr[i];
            }
            if(sum%n==0)
                cout<<0;
            else
                cout<<1;
            cout<<endl;          
        }
        return 0;
    }