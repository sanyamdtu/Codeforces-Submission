#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod  99824435
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        string p=to_string(a);
        string q=to_string(c);
        int n=p.length()+b;
        int m=q.length()+d;
        if(n>m)
        {
            cout<<">";
        }
        else if(n<m){
            cout<<"<";
        }
        else{
            if(b>d){
                for (int i = b; i >d ; --i)
                {
                    a=a*10;
                }
            }
            else{
                for (int i = d; i >b ; --i)
                {
                    c=c*10;
                }
            }
            if(a>c)
            {
                cout<<">";
            }
            else if(a==c){
                cout<<"=";
            }
            else
                cout<<"<";
        }
        cout<<endl;
    }
}
 