#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
void permute(string a, int l, int r,vector<vector<int>> &arr)
{
    
    if (l == r){
      // cout<<a<<endl;
         vector<int> p;
        for(auto i:a){
            p.push_back(i-'0');
        }
        arr.push_back(p);
    }
    else
    {
        
        for (int i = l; i <= r; i++)
        {
 
            // Swapping done
            swap(a[l], a[i]);
 
            // Recursion called
            permute(a, l+1, r,arr);
 
            //backtrack
            swap(a[l], a[i]);
        }
    }
}
int main(){
   int n,k;
   cin>>n>>k;
   string s[n];
   for (int i = 0; i < n; ++i)
   {
      cin>>s[i];
   }
   int ans=INT_MAX;
   string p="";
   for (int i = 0; i < k; ++i)
   {
      p+=to_string(i);
   }
   // cout<<p<<endl;
   vector<vector<int>> arr;
   permute(p,0,k-1,arr);
   for (int i = 0; i < arr.size(); ++i)
   {
      int a=INT_MIN,b=INT_MAX;
      for (int j = 0; j < n; ++j)
      {
         int num=0;
         for(int l=0;l<k;l++){
            num=num*10+(s[j][arr[i][l]]-'0');
         }
         // cout<<num<<endl;
         a=max(a,num);
         b=min(b,num);
      }
      ans=min(ans,a-b);
   }
   cout<<ans;
}
