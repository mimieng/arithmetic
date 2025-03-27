#include<bits/stdc++.h>
using namespace std;
signed main()
{	
	int sum=0;
	for(int i=1;i<=1200000;i++)
	{
		if(1200000%i==0)
		{
			sum++;
		 } 
	}
	cout<<sum;
	return 0; 
 } 
