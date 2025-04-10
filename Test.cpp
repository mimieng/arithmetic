#include<bits/stdc++.h>
#define int long long
using namespace std;
const int M=1e5+10;
int a[M];
//01背包两个坑；
//结果*5后爆int，
//状态转移：
//1、能嗑药打败当前敌人，那就嗑药和不嗑药两种情况比较 
//f[i]=max(f[i]+输的经验值,f[i-嗑药数量]+赢的经验值)
 
//2、药不够，那就加上输的经验值 f[i]=f[i]+输的经验值
signed main()
{	int n,x;
	cin>>n>>x;
	for(int i=0;i<n;i++)
	{
		int lose,win,use;
		cin>>lose>>win>>use;
		for(int j=x;j>=use;j--)
		{
			a[j]=max(a[j]+lose,a[j-use]+win);
		}
		for(int j=use-1;j>=0;j--)
		{
			a[j]+=lose;
		}
	}
	cout<<a[x]*5; 
	return 0;
 } 
