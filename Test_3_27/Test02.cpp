#include<bits/stdc++.h>
#define int long long
using namespace std;
int a1[10000],b1[10000],c[10000];
void toint(string src,int des[])
{
	for(int i=0;i<=src.size();i++)
	{
		des[src.size()-i]=src[i]-'0';
	}
}
signed main()
{	
	string  a,b;
	cin>>a>>b;
	toint(a,a1);
	toint(b,b1);
	int la=a.size();
	int lb=b.size();
	int lc=max(la,lb)+1;
	
	for(int i=1;i<=lc;i++)
	{
		c[i]=a1[i]+b1[i]+c[i];
		c[i+1]=c[i]/10;//��λ 
		c[i]%=10;//����λ 
	}
	while(c[lc]==0&&lc>1) lc--;
	for(int i=lc;i>=1;i--)
	{
		cout<<c[i];
	 } 

}
