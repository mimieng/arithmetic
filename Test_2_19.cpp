//题目描述
//所谓后缀表达式是指这样的一个表达式：式中不再引用括号，运算符号放在两个运算对象之后，所有计算按运算符号出现的顺序，严格地由左而右新进行（不用考虑运算符的优先级）。
//
//本题中运算符仅包含 +-*/。保证对于 / 运算除数不为 0。特别地，其中 / 运算的结果需要向 0 取整（即与 C++ / 运算的规则一致）。
//
//如：3*(5-2)+7 对应的后缀表达式为：3.5.2.-*7.+@。在该式中，@ 为表达式的结束符号。. 为操作数的结束符号。
//
//输入格式
//输入一行一个字符串 s，表示后缀表达式。
//
//输出格式
//输出一个整数，表示表达式的值。
//
//输入输出样例
//输入 #1复制
//
//3.5.2.-*7.+@
//输出 #1复制
//
//16
//输入 #2复制
//
//10.28.30./*7.-@
//输出 #2复制
//
//-7
//说明/提示
//数据保证，1≤∣s∣≤50，答案和计算过程中的每一个值的绝对值不超过 10 
//9
// 。
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e6+10; 
signed main(){
	string s;
	cin>>s;
	int ans=0;
	stack<int>st;
	for(int i=0;i<s.size();i++){
		if(s[i]=='@')
		{
			ans=st.top();
			break;
		}
		if(s[i]=='.')
		continue;
		if(s[i]>='0'&&s[i]<='9')
		{
			int tem=s[i]-'0';
			int j=i+1;
			while(s[j]>='0'&&s[j]<='9'&&j<s.size()){
				tem=tem*10+(s[j]-'0');
				++j;
			}
			i=j;
			st.push(tem);
		}
		else{
			int tem =0;
			int a=st.top();
			st.pop();
			int b=st.top();
			st.pop();
			if(s[i]=='-')
			tem=b-a;
			if(s[i]=='+')
			tem=a+b;
			if(s[i]=='*')
			tem=a*b;
			if(s[i]=='/')
			tem=b/a;
			st.push(tem);
		}
	} 
	cout<<ans;
	return 0;
}
