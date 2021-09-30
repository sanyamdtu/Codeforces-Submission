#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;
double m[2000000];
int main()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  double n;
  cin>>n;
  vector<double> s;
  double size=1;
  int r=0;
  for (int i = 0; i < 2000000; ++i)
  {
      m[i]=0;
  }
  double sum=0;
  for (double i = 0; i < n; ++i)
  {
      double t;
      cin>>t;
      if(t==1){
        double x;
        int a;
        cin>>a>>x;
        m[a-1]+=x;
        sum+=(a*x);
      }
      else if(t==2){
        double k;
        cin>>k;
        r++;
        s.push_back(k);
        sum+=k;
        size++;
      }
      else{
        double x=s.back();
        s.pop_back();
        x+=m[r];
        if(r>0)           
          m[r-1]+=m[r];
        m[r]=0;
        sum-=x;
        r--;
        size--;
      }
      double avg;
      if(size==0)
        avg=double(0.0);
      else{ 
        avg=double((double)sum/(double)size);
      }
      cout << fixed << setprecision(6)<<avg<<"\n";
  } 
}