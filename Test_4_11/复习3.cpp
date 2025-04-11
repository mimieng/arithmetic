//链接：https://ac.nowcoder.com/acm/problem/21469
//来源：牛客网
//
//凯刚写了一篇美妙的作文，请问这篇作文的标题中有多少个字符？
//注意：标题中可能包含大、小写英文字母、数字字符、空格和换行符。统计标题字 符数时，空格和换行符不计算在内。
//输入描述:
//输入文件只有一行， 一个字符串s。
//输出描述:
//输出文件只有一行，包含一个整数，即作文标题的字符数（不含空格和换行符）。
//示例1
//输入
//复制
//234
//输出
//复制
//3
//说明
//标题中共有 3 个字符，这 3 个字符都是数字字符。
#include<bits/stdc++.h> 
using namespace std;
signed main()
{	
	string s;
	int count;
	getline(cin,s);
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==' '||s[i]=='\n')
			continue;
		count++;
	 } 
	 cout<<count;
	return 0;
}
