#include<bits/stdc++.h> 
#define int long long
using namespace std;
const int M=1e3+10;
int a[M][M];
signed main()
{	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		a[x1][y1]+=1;
		a[x1][y2+1]-=1;
		a[x2+1][y1]-=1;
		a[x2+1][y2+1]+=1;
		
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			a[i][j]+=a[i-1][j]+a[i][j-1]-a[i-1][j-1];
			cout<<a[i][j]<<' ';
		}
		cout<<' '<<endl;
	}
	return 0;
}
