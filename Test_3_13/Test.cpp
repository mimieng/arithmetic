#include<bits/stdc++.h>
using namespace std; 
#define int long long
const int M=1e5+10;
int a[M],pre[M];
signed main()
{	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		pre[i]=pre[i-1]+a[i]; 
	}
	int q;
	cin>>q;
	while(q--)
	{	
	
		int r,l;
		cin>>l>>r;
		int ans=pre[r]-pre[l-1];
		cout<<ans<<endl;
	}
	
	return 0;
}
