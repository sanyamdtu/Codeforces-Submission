#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
int main(){
   int q;
   cin>>q;
   while(q--){
      int n;
      cin>>n;
      int arr[4*n];
      unordered_map<int,int> m;
      for (int i = 0; i < 4*n; ++i)
      {
         cin>>arr[i];
      }
      
      for (int i = 0; i < 4*n; ++i){
         m[arr[i]]++;
      }
      int f=0;
      for(auto i:m){
         if(i.second%2==1){
            f=1;
            break;
         }
      }
      sort(arr,arr+4*n);
      int a=arr[0]*arr[4*n-1];
      for (int i = 0,j=(4*n)-1; i < j; i+=2,j-=2)
      {
         // cout<<arr[i]<<" "<<arr[j]<<endl;
         int b=arr[i]*arr[j];
         if(a==b){
            continue;
         }
         else{

            f=1;
            break;
         }
      }
      if(f==0){
         cout<<"YES";
      }
      else{
         cout<<"NO";
      }
      cout<<endl; 

   }

}