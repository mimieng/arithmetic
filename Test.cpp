#include<bits/stdc++.h>
#define int long long
using namespace std;
const int M=1e5+10;
int a[M];
//01���������ӣ�
//���*5��int��
//״̬ת�ƣ�
//1�����ҩ��ܵ�ǰ���ˣ��Ǿ��ҩ�Ͳ��ҩ��������Ƚ� 
//f[i]=max(f[i]+��ľ���ֵ,f[i-�ҩ����]+Ӯ�ľ���ֵ)
 
//2��ҩ�������Ǿͼ�����ľ���ֵ f[i]=f[i]+��ľ���ֵ
signed main()
{	int n,x;
	cin>>n>>x;
	for(int i=0;i<n;i++)
	{
		int lose,win,use;
		cin>>lose>>win>>use;
		for(int j=x;j>=use;j--)
		{
			a[j]=max(a[j]+lose,a[j-use]+win);
		}
		for(int j=use-1;j>=0;j--)
		{
			a[j]+=lose;
		}
	}
	cout<<a[x]*5; 
	return 0;
 } 
