//���ӣ�https://ac.nowcoder.com/acm/problem/16584
//��Դ��ţ����
//
//����һ���������뽫��������λ�����ַ�ת�õ�һ������������ҲӦ���������ĳ�����ʽ�������Ǹ�����ԭ��Ϊ�㣬����ת��õ������������λ���ֲ�ӦΪ�㣨�μ�����2����
//��������:
//һ������ N��
//�������:
//һ����������ʾ��ת���������
//ʾ��1
//����
//����
//123
//���
//����
//321
//ʾ��2
//����
//����
//-380
//���
//����
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
