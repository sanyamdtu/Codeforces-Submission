#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod  99824435
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        for (ll i = 0; i < n; ++i)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for (ll i = 1,c=0; i < n&&c<n/2; ++i,c++)
        {
            cout<<arr[i]<<" "<<arr[0]<<endl;   
        }
    }
}
 