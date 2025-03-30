#include<bits/stdc++.h>
#define int long long
using namespace std;
int arr[10000];
int l; 
void cheng()
{
	for(int i=1;i<=l;i++)
	{
		arr[i]*=2; 
	}
	for(int i=1;i<=l;i++)
	{
		arr[i+1]+=arr[i]/10;//进位
		arr[i]%=10; //保留本位 
	}
	if(arr[l+1])
	{
		l++;
	}
}
signed main()
{	int n;
	string q;
	cin>>n>>q;
	reverse(q.begin(),q.end());//反转字符串 
	int p=q.find('.');
	q.erase(p,1);//它从字符串 q 的位置 p 开始，移除 1 个字符
	l=q.size();
	for(int i=0;i<l;i++)
	{
		arr[i+1]=q[i]-'0';
	}
	for(int i=1;i<=n;i++)
		cheng();
	if(arr[p]>=5)
	{
		arr[p+1]++;
	}
	for(int i=p+1;i<=l;i++)
	{
		arr[i+1]+=arr[i]/10;//检查进位 
		arr[i]%=10;//保留本位 
	}
	if(arr[l+1])
		l++;//如果进位多了的话，就扩栈 
	for(int i=l;i>p;i--)
	{
		cout<<arr[i]; 
	}
	return 0;
}
