#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll a=1;
        for (ll i = 1; i <=sqrt(n)&&i<=k ; ++i)
        {
            if(n%i==0){
                a=max(a,i);
                if((n/i)<=k)
                    a=max(a,(n/i));
            }
        }
        cout<<(n/a)<<endl;

    }
}