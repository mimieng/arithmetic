#include<bits/stdc++.h>
using namespace std;
#define int long long
const int M=1e4+10;
int o=0,sum=0;
int d[M];
signed main()
{	string a,b;
	cin>>a>>b;
	int len=a.length();
	for(int i=0;i<len;i++)
	{
		if(a[i]!=b[i])
		{
			d[o++]=i;
		}
	}
	for(int i=0;i<o-1;i+=2)
	{
		sum+=(d[i+1]-d[i]);
	}
	cout<<sum;
	return 0; 
}
