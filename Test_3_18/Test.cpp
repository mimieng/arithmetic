#include<bits/stdc++.h>
using namespace std;
#define int long long
const int M=1e7+10;

signed main()
{	
	int count=0; // ��ʼ��������������ͳ���������������ָ���
	int n;
	cin>>n; // ����һ������n����ʾҪ���ķ�Χ�Ǵ�1��n
	for(int i=1;i<=n;i++) // ���ѭ����������1��n��ÿ������
	{
		int num=i; // ����ǰ����i��ֵ��num�����ں�����λ���
		for(int j=1;num;j++) // �ڲ�ѭ�������ڼ��num��ÿһλ
		{
			if(j%2!=(num%10)%2) // ����jλ����ż���Ƿ���j����ż�Բ�ͬ
			{
				break; // �����ͬ�������ڲ�ѭ���������һ������
			}
			num/=10; // ȥ��num�����һλ�����������һλ
		}
		if(num==0) // ���num������0��˵������λ����������
		{
			count++; // ��������1
		}
	}
	cout<<count; // ����������������ָ���
	return 0;
}
