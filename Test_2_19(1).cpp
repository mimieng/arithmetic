//题目描述
//n 个人围成一圈，从第一个人开始报数,数到 m 的人出列，再由下一个人重新从 1 开始报数，数到 m 的人再出圈，依次类推，直到所有的人都出圈，请输出依次出圈人的编号。
//
//注意：本题和《深入浅出-基础篇》上例题的表述稍有不同。书上表述是给出淘汰 n?1 名小朋友，而该题是全部出圈。
//
//输入格式
//输入两个整数 n,m。
//
//输出格式
//输出一行 n 个整数，按顺序输出每个出圈人的编号。
//
//输入输出样例
//输入 #1复制
//
//10 3
//输出 #1复制
//
//3 6 9 2 7 1 8 5 10 4
//说明/提示
//1≤m,n≤100
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e6+10;
signed main()
{	
	int n,m;
	cin>>n>>m;
	queue<int>q;
	for(int i=1;i<=n;i++)
	{
		q.push(i);
	}
	int cnt=1;
	while(q.size())
	{
		int t=q.front();
		q.pop();
		if(cnt==m){
			cout<<t<<' ';
			cnt=1;
			continue;
		}
		else{
			q.push(t);
			cnt++;
		}
		
	}
	return 0;
}
