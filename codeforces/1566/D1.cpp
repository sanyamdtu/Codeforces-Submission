#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
struct node{
    ll val,i;
};
bool comp (node &a,node &b){
    if(a.val==b.val)
        return a.i>b.i;
    return a.val<b.val;
}
int main(){
	int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        
        node arr[n*m];
        for (int i = 0; i < n*m; ++i)
        {
            
            cin>>arr[i].val;
            arr[i].i=i;
        }
        sort(arr,arr+m,comp);
        int a[m];
        for (int i = 0; i < m; ++i)
        {
            a[i]=arr[i].i;
        }
        ll ans=0;
        for (int i = 0; i < m; ++i)
        {
            // cout<<a[i];
            for (int j = 0; j < i; ++j)
            {
                if(a[i]>a[j]){
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    
}
