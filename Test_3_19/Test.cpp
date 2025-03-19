#include<bits/stdc++.h> 
using namespace std;
#define int long long 
const  int M=1e7+10;
int prime[M];
bitset<100000005> isprime;
void Prime(int x)
{	int k=0;
	for(int i=2;i<=x;i++)
	{
		isprime[i]=1;
	}
	for(int i=2;i<=x;i++)
	{
		if(isprime[i])
		{
			prime[++k]=i;
		}
		for(int j=1;j<=k;j++)
		{
			int n=prime[j]*i;
			if(n>x)
			{
				break;
			}
			isprime[n]=0;
			if(!(i%prime[j]))
			{
				break; 
			}
		}
	}
}
signed main()
{	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin.tie(0);
	int n,q;
	cin>>n>>q;
	Prime(n);
	for(int i=1;i<=q;i++)
	{
		int x=0;
		cin>>x;
		cout<<prime[x]<<endl;
	}
	return 0;
 } 
