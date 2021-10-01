#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
int main()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  string a,b;
  cin>>a>>b;
  int n=a.length();
  int m=b.length();
  int c=0,d=0;
  for (int i = 0; i < m; ++i)
  {
      if(b[i]=='1')
        c++;
  }
  int ans=0;
  for (int j = 0,i=0; j < n; ++j)
  {
    if(a[j]=='1')
        d++;    
    if(j-i+1==m){
      if(c%2==d%2)
        ans++;
      if(a[i]=='1')
        d--;
      i++;
    }
  }
  cout<<ans;
}