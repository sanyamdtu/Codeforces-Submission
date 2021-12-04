#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
int main()
{

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<=26){
            char ch='a';
            for (int i = 0; i < n; ++i)
            {
                cout<<ch;
                ch++;
            }
            cout<<endl;
            continue;
        }
        int k=n/2;
        for (int i = 0; i < k; ++i)
        {
            cout<<"a";
        }
        cout<<"b";
        if(n%2==1)
            cout<<"c";
        for (int i = 0; i < k-1; ++i)
        {
            cout<<"a";
        }
        cout<<endl;
    }

}
 