//链接：https://ac.nowcoder.com/acm/problem/206021
//来源：牛客网
//
//天才程序员菜哭武和石头组队参加一个叫做国际排列计算竞赛 (International Competition of Permutation Calculation, ICPC) 的比赛，这个比赛的规则是这样的： 
//
//一个选手给出一个长度为 n 的排列，另一个选手给出 m 个询问，每次询问是一个形如 (l, r) 的数对，查询队友给出的排列中第 l 个数到第 r 个数的和，并将查询到的这个区间和加入总分，最后总分最高的队伍就能获胜。
//
//石头手速很快，在比赛一开始就给出了 m 个询问；菜哭武也很强，他总是能找到最合适的排列，使得他们队的总分尽可能高。
//
//在看比赛直播的你看到了石头给出的 m 个询问，聪明的你能不能预测出他们队伍最终的得分呢？
//
//一个排列是一个长度为 n 的数列，其中 1 ~ n 中的每个数都在数列中恰好出现一次。比如 [1, 3, 2] 是一个排列，而 [2, 1, 4] 和 [1, 2, 3, 3] 不是排列。 
//
//输入描述:
//第一行输入两个数 n (1≤n≤2×105) 和 m (1≤m≤2×105) 。 
//接下来 m 行，每行输入两个数 l 和 r ，代表这次查询排列中第 l 个到第 r 个的和。
//
//输出描述:
//输出一个整数，代表他们队伍总分的最大值。
//示例1
//输入
//复制
//7 3
//1 3
//3 7
//5 6
//输出
//复制
//46
//说明
//一个符合条件的排列是 [1,3, 6, 4, 7, 5, 2]，于是最终的得分为 (1 + 3 + 6) + (6 + 4 + 7 + 5 + 2) + (7 + 5) = 46
#include <bits/stdc++.h>
#define int long long //(有超时风险)
#define PII pair<int,int>
#define endl '\n'

using namespace std;

const int N=2e5+10,M=1e3+10;

int a[N],b[N],pre[N];

signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	while(m--)
	{
		int l,r;
		cin>>l>>r;
		b[l]+=1;
		b[r+1]-=1;
		
	}
	for(int i=1;i<=n;i++)
	{
		b[i]+=b[i-1];
		
	}
	sort(b+1,b+n+1);
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		ans+=b[i]*i;
	}
  	cout<<ans<<endl;

    return 0;
}
