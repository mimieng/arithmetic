#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{	
	int n,x;
	cin>>n>>x;
	int ans=0;
	for(int i=1;i<=n;i++){
		string s=to_string(i);
		for(int i=0;i<s.size();i++){
			if(s[i]-'0'==x)
			ans++;
		}
	}
	cout<<ans;
	return 0; 
 } 
