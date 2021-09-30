#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
int main()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int n;
  cin>>n;
  int arr[n],sum=0,ans=0;
  for (int i = 0; i < n; ++i)
  {
    cin>>arr[i];
    sum+=arr[i];
  }
  sort(arr,arr+n);
  ans=sum;
  unordered_map<int,int> m;
  for (int i = 1; i < n; ++i)
  {
      for (int j = 2; j <=100 ; ++j)
      { 
          if(arr[i]%j==0){
            int c=sum-arr[i]+(arr[i]/j)+(arr[0]*j)-arr[0];
            ans=min(ans,c);
          }
      }
  }
  cout<<ans;
}