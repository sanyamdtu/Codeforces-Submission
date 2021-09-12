#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
int main(){
	int t;
    cin>>t;
    while(t--){
        ll n,s;
        cin>>n>>s;
        if(n<=2)
            cout<<(s/n);
        else{
            n=n-((n+1)/2)+1;
            cout<<(s/n);
        }
        cout<<endl;
    }
    
}
