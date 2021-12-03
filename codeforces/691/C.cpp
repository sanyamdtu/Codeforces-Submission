#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod  99824435
int main()
{
    string a="",b="";
    string s;
    cin>>s;
    int i = 0;
    for (; i < s.length(); ++i)
    {
        if(s[i]=='.')
        {
            i++;
            break;
        }
        a+=s[i];
    }
    for (; i < s.length(); ++i)
    {
        if(s[i]=='.')
        {
            i++;
            break;
        }
        b+=s[i];
    }
     i=b.length()-1;
    while(i>=0&&b[i]=='0'){
        b.pop_back();
        i--;
    }
    i=0;
    while(i<a.length()&&a[i]=='0'){
        i++;
    }
    a=a.substr(i);
    if(b==""){
        if(a=="")
        {
            cout<<0;
            return 0;
        }
        cout<<a[0];
        if(a.length()==1)
            return 0;
        int j=a.length()-1;
        while(j>=0&&a[j]=='0'){
            j--;
        }
        if(j-1+1>0)
        cout<<".";        
        for (int i = 1; i <=j ; ++i)
        {
            cout<<a[i];
        }
        cout<<"E";
        cout<<a.length()-1;
        return 0;
    }
    else if(a!=""){
        cout<<a[0]<<".";
        a=a.substr(1);
        cout<<a;
        cout<<b;
        if(a.length()>=1){
            cout<<"E"<<a.length();
        }
        return 0;
    }
    else{
        int i=0;
         while(i<b.length()&&b[i]=='0'){
            i++;
        }
        b=b.substr(i);
        cout<<b[0];
        b=b.substr(1);
        if(b!="")
        cout<<"."<<b;
        cout<<"E-"<<i+1;
    }
}
 