#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,x,mul=0,sum=0;
signed main()
{	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		sum+=x*x;
		mul+=x; 
	} 
	cout<<(mul*mul-sum)/2;
	return 0;
 } 
