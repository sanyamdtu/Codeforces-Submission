#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
ll power(ll x, ll y)
{
    ll temp;
    if (y == 0)
        return 1;
    temp = power(x, y / 2);
    if (y % 2 == 0)
        return temp * temp;
    else
        return x * temp * temp;
}
 
// Function to find the Kth
// root of the number N using BS
ll nthRootSearch(ll low, ll high,
                  ll N, ll K)
{
 
    // If the range is still valid
    if (low <= high) {
 
        // Find the mid-value of range
        ll mid = low+((high-low) / 2);
 
        // Base Case
        if ((power(mid, K) <= N)
            && (power(mid + 1, K) > N)) {
            return mid;
        }
 
        // Condition to check if the
        // left search space is useless
        else if (power(mid, K) < N) {
            return nthRootSearch(mid + 1,
                                 high, N, K);
        }
        else {
            return nthRootSearch(low,
                                 mid - 1,
                                 N, K);
        }
    }
    return low;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t=1;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll b=nthRootSearch(0, 1000000, n, 2);
        ll c=nthRootSearch(0, 2000, n, 3);
        ll d=nthRootSearch(0, 100, n, 6);
        cout<<b+c-d<<endl;
    }
    
}