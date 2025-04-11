//链接：https://ac.nowcoder.com/acm/problem/16599
//来源：牛客网
//
//请统计某个给定范围[L, R]的所有整数中，数字2出现的次数。
//
//比如给定范围[2, 22]，数字2在数2中出现了1次，在数12中出现1次，在数20中出现1次，在数21中出现1次，在数22中出现2次，所以数字2在该范围内一共出现了6次。
//
//输入描述:
//输入共1行，为两个正整数L和R，之间用一个空格隔开。
//输出描述:
//输出共1行，表示数字2出现的次数。
//示例1
//输入
//复制
//2 22
//输出
//复制
//6
#include<bits/stdc++.h> 
using namespace std;
signed main()
{	
	int count=0;
	int L,R; 
	cin>>L>>R;
	for(int i=L;i<=R;i++)
	{
		string s=to_string(i);
		for(int i=0;i<s.size();i++)
		{
			
			if(s[i]-'0'==2){
				count++;
			}
		}
	}
	cout<<count;
	return 0;
}
