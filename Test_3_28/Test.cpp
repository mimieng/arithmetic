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
		arr[i+1]+=arr[i]/10;//��λ
		arr[i]%=10; //������λ 
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
	reverse(q.begin(),q.end());//��ת�ַ��� 
	int p=q.find('.');
	q.erase(p,1);//�����ַ��� q ��λ�� p ��ʼ���Ƴ� 1 ���ַ�
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
		arr[i+1]+=arr[i]/10;//����λ 
		arr[i]%=10;//������λ 
	}
	if(arr[l+1])
		l++;//�����λ���˵Ļ�������ջ 
	for(int i=l;i>p;i--)
	{
		cout<<arr[i]; 
	}
	return 0;
}
