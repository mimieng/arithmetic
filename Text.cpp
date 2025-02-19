//题目描述
//假设一个表达式有英文字母（小写）、运算符（+、-、*、/）和左右小（圆）括号构成，以 @ 作为表达式的结束符。请编写一个程序检查表达式中的左右圆括号是否匹配，若匹配，则输出 YES；否则输出 NO。表达式长度小于 255，左圆括号少于 20 个。
//
//输入格式
//一行：表达式。
//
//输出格式
//一行：YES 或 NO。
//
//输入输出样例
//输入 #1复制
//
//2*(x+y)/(1-x)@
//输出 #1复制
//
//YES
//输入 #2复制
//
//(25+x)*(a*(a+b+b)@
//输出 #2复制
//
//NO
//说明/提示
//表达式长度小于 255，左圆括号少于 20 个。
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e6+10; 
signed main()
{	string n;
	cin>>n;
	stack<char>st;//后进先出 
	for(int i=0;i<n.size();i++)
	{
		if(n[i]=='(')
		st.push('(');
		else if(n[i]==')')
		{	if(st.empty())
			{
				cout<<"NO";
				return 0;
			}
			st.pop(); 
		}
	}
	if(!st.empty())
	{
		cout<<"NO";
	}
	else
	{
		cout<<"YES";
	}
	return 0;
 } 
