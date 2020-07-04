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
		string a,b;
		cin>>a>>b;
		int cost=0;
		for(int i=0;i<n;i++){
			if(i==n){
				if(a[i]!=b[i])
					cost++;
			}
			else if(a[i]!=b[i]){
				if(a[i]!=a[i+1]&&a[i]==b[i+1]&&a[i+1]==b[i]){
					cost++;
					i++;
				}
				else
					cost++;
			}
		}
		cout<<cost;
		return 0;
}