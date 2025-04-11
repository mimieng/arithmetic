//链接：https://ac.nowcoder.com/acm/problem/16584
//来源：牛客网
//
//给定一个整数，请将该数各个位上数字反转得到一个新数。新数也应满足整数的常见形式，即除非给定的原数为零，否则反转后得到的新数的最高位数字不应为零（参见样例2）。
//输入描述:
//一个整数 N。
//输出描述:
//一个整数，表示反转后的新数。
//示例1
//输入
//复制
//123
//输出
//复制
//321
//示例2
//输入
//复制
//-380
//输出
//复制
//-83
#include<bits/stdc++.h> 
using namespace std;
signed main()
{	
	string s;
	cin>>s;
	string str=s;
	reverse(s.begin(),s.end());
	if(str[0]=='-')
	{
	
		cout<<'-';
		if(s[0]=='0')
		{
			int j=0;
			while(s[j]=='0')
			{
				j++;
			}
			for(int i=j;i<s.size()-1;i++)
			{
				cout<<s[i];
			}
		}
		else{
			cout<<s.substr(0,s.size()-1);
		}
		}
	else{
			if(s[0]=='0')
		{
			int j=0;
			while(s[j]=='0')
			{
				j++;
			}
			for(int i=j;i<s.size();i++)
			{
				cout<<s[i];
			}
		}
		else{
			cout<<s.substr(0);
		}
	}
	return 0;
}
