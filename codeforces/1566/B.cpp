#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
int main(){
	int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        int c=0,d=0,i=0;
        while (i < n)
        {
            if(i<n&&s[i]=='0')
                c++;
            while(i<n&&s[i]=='0'){
                i++;
            }
            if(i<n&&s[i]=='1')
                d++;
            while(i<n&&s[i]=='1'){
                i++;
            }
        }
        if(d==0)
            cout<<1;
        else if(c==0)
            cout<<0;
        else if(c==1){
            cout<<1;
        }
        else
            cout<<2;
        cout<<endl;
    }
    
}
