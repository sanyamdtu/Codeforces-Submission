#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
   ll l, r;
};
bool comp(node &a,node &b){
   if(a.l==b.l)
      return a.r>b.r;
   return a.l<b.l;
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   ll n;
   cin >> n;
   int l[n],r[n];
   for (int i = 0; i < n; ++i)
   {
      cin>>l[i]>>r[i];
   }
   sort(l,l+n);
   ll ans=0;
   sort(r,r+n);
   for (int i = 0; i < n; ++i)
   {
      ans+=max(l[i],r[i])+1;
   }
   cout << ans;
}