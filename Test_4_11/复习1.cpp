//链接：https://ac.nowcoder.com/acm/problem/16538
//来源：牛客网
//
//试计算在区间1 到n 的所有整数中，数字x（0 ≤ x ≤ 9）共出现了多少次？
//例如，在1到11 中，即在1、2、3、4、5、6、7、8、9、10、11 中，数字1 出现了4 次。
//输入描述:
//输入共1行，包含2个整数n、x，之间用一个空格隔开。
//输出描述:
//输出共1行，包含一个整数，表示x出现的次数。
//示例1
//输入
//复制
//11 1
//输出
//复制
//4
#include<bits/stdc++.h> 
using namespace std;
signed main()
{	
	int count=0;
	int n,x; 
	cin>>n>>x;
	for(int i=1;i<=n;i++)
	{
		string s=to_string(i);
		for(int i=0;i<s.size();i++)
		{
			
			if(s[i]-'0'==x){
				count++;
			}
		}
	}
	cout<<count;
	return 0;
}
