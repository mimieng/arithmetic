//���ӣ�https://ac.nowcoder.com/acm/problem/16538
//��Դ��ţ����
//
//�Լ���������1 ��n �����������У�����x��0 �� x �� 9���������˶��ٴΣ�
//���磬��1��11 �У�����1��2��3��4��5��6��7��8��9��10��11 �У�����1 ������4 �Ρ�
//��������:
//���빲1�У�����2������n��x��֮����һ���ո������
//�������:
//�����1�У�����һ����������ʾx���ֵĴ�����
//ʾ��1
//����
//����
//11 1
//���
//����
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
