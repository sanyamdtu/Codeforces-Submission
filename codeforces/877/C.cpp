#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
int main()
{
  ll t=1;
  // cin>>t;
  while(t--){
    int n;
    cin>>n;
    if(n==2){
      cout<<3<<endl;
      cout<<"2 1 2";
      return 0;
    }
    vector<int> v;
    for (int i = 2; i <= n; i+=2)
    {
       v.push_back(i);
       // v.push_back(i);
    }
    for (int i = 1; i <= n; i+=2)
    {
       v.push_back(i);
       // v.push_back(i);
    }
    for (int i = 2; i <= n; i+=2)
    {
       v.push_back(i);
       // v.push_back(i);
    }
    cout<<v.size()<<endl;
    for(auto i:v){
      cout<<i<<" ";
    }

  }
}
 