#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
int main()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int t;
  cin>>t;
  while(t--){
    int n,sum=0,ans;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
      cin>>arr[i];
      sum+=arr[i];
    }
    ans=n-1;
    for (int k = 1; k <=n; ++k)
    {
        int p=sum/k;
        if((sum%k)>0)
          continue;
        int f=0;
        int c=0,l=0;
        for (int j = 0; j <n; ++j)
        {
            if(c+arr[j]>p){
              f=1;
              break;
            }
            else if(c+arr[j]==p){
              c=0;
            }
            else{
              c+=arr[j];
            }
            l++;
        }
        if(c>p)
          f=1;
        else if(c==p)
          c=0;
        else if(c>0)
          f=1;
        if(f==0){
          ans=min(ans,n-k);
        }
    }
    cout<<ans<<endl;

  }
  
}