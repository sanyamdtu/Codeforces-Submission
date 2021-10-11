#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define size 20000000
int p[20000000];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    for (ll i = 0; i < size; ++i)
    {
        p[i]=i;
    }
    for (ll i = 2; i < size; ++i)
    {
        if(p[i]==i){
            for (ll j = i*i; j < size; j+=i)
            {
                p[j]=i;
            }
        }
        
    }
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll arr[n];
        for (ll i = 0; i < n; ++i)
        {
            cin>>arr[i];
        }
        ll ans=0;
        unordered_map<string,ll> m;
        for (ll i = 0; i < n; ++i)
        {
            string a="";
            while(arr[i]>1){
                ll c=0;
                ll pr=p[arr[i]];
                while(arr[i]%pr==0){
                    arr[i]/=pr;
                    c++;
                }
                if(c%2==1)
                   a+="&"+to_string(pr);
            }
            if(m[a]==1){
                ans++;
                m.clear();
            }
            m[a]++;
        }
        cout<<ans+1<<endl;
    }

}