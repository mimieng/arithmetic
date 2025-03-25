#include<bits/stdc++.h>
#define int long long
using namespace std;
const int M=51;
int a[M];
signed main()
{	int n,sum;
	cin>>n;
	int l=0,r=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=2;i<=n;i++)
	{	
		if(abs(a[i])<abs(a[1])&&a[i]>0)
		{
			l++;
		}
			if(abs(a[i])>abs(a[1])&&a[i]<0)
		{
			r++;
		}
	 } 
	 if(a[1]<0)
	 {
	 	if(l==0)
	 	{
	 		sum=1;
		 }
		 else{
		 	sum=1+l+r;
		 }
	 }
	if(a[1]>0)
	 {
	 	if(r==0)
	 	{
	 		sum=1;
		 }
		else{
		 	sum=1+l+r;
		 }
	 }
	 cout<<sum;
	return 0;
 } 
