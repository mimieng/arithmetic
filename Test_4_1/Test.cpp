#include<bits/stdc++.h>
const int M=1e5+10;
int Ti[M],Di[M],Li[M];
bool st[M]; 
int T,N;
int flag=0 ;
using namespace std;
void dfs(int cnt,int lastTime)
{
	if(cnt==N)
		{
			flag=1;		
			return ;
		}
	for(int i=0;i<N;i++)
	{
		if(!st[i]&&Ti[i]+Di[i]>=lastTime)
		{
			st[i]=true;
			dfs(cnt+1,max(lastTime,Ti[i])+Li[i]);
			st[i]=false; 
		}
	}
} 
signed main()
{	cin>>T;
	while(T--)
	{	cin>>N;
		flag=0; 
		memset(st,false,sizeof st);	
		for(int i=0;i<N;i++)
		{
			cin>>Ti[i]>>Di[i]>>Li[i];
		}
	
	
	dfs(0,0);
	if(flag)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	}
	return 0;
 } 
