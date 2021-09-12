#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
int main(){
	int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,t;
        cin>>s>>t;
        int ans=0,c=0;
        for (int i = 0; i < n; ++i)
        {
            if(s[i]=='1'&&t[i]=='1'){
                c=1;
            }
            else if(c==1){
                ans+=2;
                c=0;
            }
            else{
                if(i<n-1&&s[i]=='0'&&t[i]=='0'&&s[i+1]=='1'&&t[i+1]=='1'){
                    ans+=2;
                    i++;
                }
                else if(s[i]=='0'&&t[i]=='0')
                    ans+=1;
                else
                    ans+=2;
            }
        }
        cout<<ans<<endl;
    }
    
}
