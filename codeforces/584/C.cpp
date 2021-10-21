#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007

int main()
{
  int n,t;
  cin>>n>>t;
  string a,b;
  cin>>a>>b;
  vector<int> v,w;
  int p=0,q=0;
  for (int i = 0; i < n; ++i)
  {
    if(a[i]!=b[i]){
      q++;
      v.push_back(i);
    }
    else{
      w.push_back(i); 
    }
  }
  int c=t-p;
  while(c>0&&(!v.empty()||!w.empty())){
    if(q==t){
      if(!v.empty()){
        int idx=v.back();
        if(b[idx]!='b'&&a[idx]!='b')
          b[idx]='b';
        else if(b[idx]!='c'&&a[idx]!='c')
          b[idx]='c';
        else
          b[idx]='a';
        v.pop_back();
      }
      else{
        int idx=w.back();
        if(b[idx]!='b')
          b[idx]='b';
        else if(b[idx]!='c')
          b[idx]='c';
        w.pop_back();
        q++;
      }
    }
    else if(q>t){
      if(!v.empty()){
        int idx=v.back();
        b[idx]=a[idx];
        v.pop_back();
        q--;
      }
      else
        break;
    }
    else{
      if(!w.empty()){
        int idx=w.back();
        if(b[idx]!='b')
          b[idx]='b';
        else
          b[idx]='c';
        w.pop_back();
        q++;
      }
      else
        break; 
    }
    c--;
  }
  if(q!=t||c>0)
    cout<<-1;
  else
  cout<<b;
}
 