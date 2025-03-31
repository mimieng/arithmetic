#include<bits/stdc++.h>
using namespace std;
const int M=100;
int a[M][M];
int b[M][M];
queue<pair<int ,int >>p;
void bfs(int x,int y)
{
	p.push({x,y});
	
}
signed main()
{	int n,m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			{
				cin>>a[i][j];
			 } 
	bfs(1,1);
	return 0;
 } 
