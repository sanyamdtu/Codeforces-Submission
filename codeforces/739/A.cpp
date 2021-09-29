#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
struct node{
  int l,r;
};
bool comp(node &a,node &b){
  if(a.r-a.l==b.r-b.l)
    return a.l<b.l;
  return (a.r-a.l)<(b.r-b.l);
}
int main()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int n,m;
  cin>>n>>m;
  node arr[m];
  for (int i = 0; i < m; ++i)
  {
    cin>>arr[i].l>>arr[i].r;
    arr[i].l--;
    arr[i].r--;
  }
  sort(arr,arr+m,comp);
  int ans[n];
  int c=arr[0].r-arr[0].l+1;
  cout<<c<<endl;
  for (int i = 0; i <n; ++i)
  {
    cout<<(i%c)<<" ";
  }
  cout<<endl;
}