#include<bits/stdc++.h>
#define int long long 
using namespace std;
const int M=1e5+10;
int a[M],b[M],g[M],k[M];
signed main()
{	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i]>>g[i]>>k[i];
	}
	int x,y;
	cin>>x>>y;
	int ans=-1;
	for(int i=n;i>=1;--i)
	{
		if(x>=a[i]&&x<(a[i]+g[i])&&y>=b[i]&&y<=(b[i]+k[i]))
			{
				ans=i;
				break;
			}
	}
	cout<<ans;
	return 0;
 } 
