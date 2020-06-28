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
	cin >> t;
	while (t--)
	{
		string s;
		cin>>s;
		string ans;
		ans="";
		int i=0;
		if(s.length()==2)
			ans=s;
		else{
		    while(s[i]!='\0'){
			   ans.pb(s[i]);
			   i+=2;
		    }	
		    ans.pb(s[s.length()-1]);
		}
		cout<<ans<<endl;
		
	}
	return 0;
}