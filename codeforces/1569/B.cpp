#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		char arr[n][n];
		memset(arr,'=',sizeof(arr));
		vector<int> a,b;
		for (int i = 0; i < n; ++i)
		{
			if(s[i]=='2')
				b.push_back(i);
			else
				a.push_back(i);
		}
		if(b.size()==2||b.size()==1){
			cout<<"NO"<<endl;
		}
		else{
			for (int i = 0; i < b.size(); ++i)
			{
				int c=b.size();
				arr[b[i]][b[(i+1)%c]]='+';
				arr[b[(i+1)%c]][b[i]]='-';
			}
			for (int i = 0; i < n; ++i)
			{
				arr[i][i]='X';
			}
			cout<<"YES"<<endl;
			for (int i = 0; i < n; ++i)
			{
				for (int j = 0; j < n; ++j)
				{
					cout<<arr[i][j];
				}
				cout<<endl;
			}
		}
	}
	
}