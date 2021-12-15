#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s;
    cin>>s;
    vector<char> v;
    string f="",l="";
    map<char,int> m;
    for (int i = 0; i < s.length(); ++i)
    {
        m[s[i]]++;
    }
    for(auto i:m){
        int e=i.second;
        while(e>1){
            f+=i.first;
            l+=i.first;
            e-=2;
        }
        if(e==1)
            v.push_back(i.first);
    }
    sort(v.begin(), v.end());
    char ch='%';
    for (int i = 0,j=v.size()-1; i <=j ; ++i,j--)
    {
        if(i==j){
            ch=v[i];
            break;
        }
        f+=v[i];
        l+=v[i];
    }
    sort(f.begin(), f.end());
    if(ch!='%')
        f+=ch;
    sort(l.begin(), l.end());
    reverse(l.begin(), l.end());
    cout<<f<<l;
}