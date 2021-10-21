#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007

int main()
{
  ll t=1;
  // cin>>t;
  while(t--){
    ll n;
    cin>>n;
    unordered_map<ll,ll> m;
    priority_queue<ll, vector<ll>,greater<ll>> q;
    vector<string> ans; 
    vector<ll> num; 
    for (ll i = 0; i < n; ++i)
    {
      ll b;
      string a;
      cin>>a;
      if(a=="insert"){
        cin>>b;
        ans.push_back(a);
        num.push_back(b);
        q.push(b);
        m[b]++;
      }else if(a=="getMin"){
        cin>>b;
        if(m[b]==0){
          ans.push_back("insert");
          num.push_back(b);
          q.push(b);
          m[b]++;
        }
        while(!q.empty()&&q.top()!=b){
          ans.push_back("removeMin");
          m[q.top()]--;
          q.pop();
        }
        ans.push_back(a);
        num.push_back(b);
      }
      else{
        if(q.empty()){
          m[4]++;
          ans.push_back("insert");
          num.push_back(4);
          q.push(4);
        }
        m[q.top()]--;
        q.pop();
        ans.push_back(a);
      }
    }
    cout<<ans.size()<<endl;
    ll j=0;
    for(auto i:ans){
      cout<<i<<" ";
      if(i=="removeMin"){
        cout<<endl;
      }
      else{
        cout<<num[j++]<<"\n";
      }
    }
  }
}
 