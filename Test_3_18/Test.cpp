#include<bits/stdc++.h>
using namespace std;
#define int long long
const int M=1e7+10;

signed main()
{	
	int count=0; // 初始化计数器，用于统计满足条件的数字个数
	int n;
	cin>>n; // 输入一个整数n，表示要检查的范围是从1到n
	for(int i=1;i<=n;i++) // 外层循环，遍历从1到n的每个数字
	{
		int num=i; // 将当前数字i赋值给num，用于后续逐位检查
		for(int j=1;num;j++) // 内层循环，用于检查num的每一位
		{
			if(j%2!=(num%10)%2) // 检查第j位的奇偶性是否与j的奇偶性不同
			{
				break; // 如果不同，跳出内层循环，检查下一个数字
			}
			num/=10; // 去掉num的最后一位，继续检查下一位
		}
		if(num==0) // 如果num被减到0，说明所有位都满足条件
		{
			count++; // 计数器加1
		}
	}
	cout<<count; // 输出满足条件的数字个数
	return 0;
}
