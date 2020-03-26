#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long a,b,ans;
        cin>>a>>b;
        if(a%b==0)
         ans=0;
        else if(a<b){
            ans=b-a;
        }
        else{
            ans=b-(a%b);
        }
        cout<<ans<<endl;
    }
    
    return 0;
}