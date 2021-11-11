#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
struct node{
  int i,v;
};
bool comp(node &a,node &b)
{
  return a.v<b.v; 
}
int main()
{
  ll t=1;
  // cin>>t;
  while(t--){
    int n;
    cin>>n;
    // node arr[n];
    int arr[n+1];
    int m[n+2];
    for (int i = 1; i <= n; ++i)
    {
      cin>>arr[i];
      m[arr[i]]=i;
    }   
    vector<pair<int,int>> a;
    for (int i = 1; i <= n; ++i)
    {
      if(i==arr[i])
        continue;
      int idx=m[i];
      m[arr[i]]=idx;
      m[i]=i;
      if(abs(i-idx)>=(n/2)){
        a.push_back({i,idx});

      }
      else if(i>(n)/2&&idx>(n)/2){
        a.push_back({1,i});
        a.push_back({1,idx});
        a.push_back({1,i});

      }
      else if(i<=(n)/2&&idx<=(n)/2){
        a.push_back({n,i});
        a.push_back({n,idx});
        a.push_back({n,i});

      }
      else{
        if(i>idx)
          swap(i,idx);
        //1 i idx n
        a.push_back({n,i});
        a.push_back({n,1});
        a.push_back({1,idx});
        a.push_back({n,1});
        a.push_back({n,i});
      }
      swap(arr[i],arr[idx]);
    }
    cout<<a.size()<<endl;
      for(auto i:a){
        cout<<i.first<<" "<<i.second<<"\n";
      }
  }
}
 