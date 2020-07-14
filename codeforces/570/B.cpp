#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define mod 1000000007
#define INF 1e18
typedef  long long ll;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll n,a,m;
	cin>>n>>m;
	if(n<=2){
		if(n==1)
			a=1;
		else
			(m==2)?a=1:a=2;
	}
	else{
		if(m>(n/2))
		 a=m-1;
	    else 
		 a=m+1;
	}
	cout<<a;
	return 0;
}