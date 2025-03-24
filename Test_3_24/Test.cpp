#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[10]={0,1,2,3,4,5,6,7,8,9};
int ans=0;
signed main()
{	int n;
	cin>>n;
	while(1){
	int x=0;
	for(int i=1;i<=7;i++)
	{
		x=x*10+a[i];
		int y=0;
		for(int j=i+1;j<=8;j++)
		{
			y=y*10+a[j];
			int z=0;
			for(int k=j+1;k<=9;k++){
				z=z*10+a[k];
			}
			if(y%z==0&&x+y/z==n)
			{
				ans++;
			}
		}		
	 } 
	 next_permutation(a+1,a+1+9);
	 bool flag=0;
	 for(int i=1;i<=9;i++){
	 	if(a[i]!=i){
	 		flag=1;
	 		break;
		 }
	 } 
	 if(!flag)
	 {
	 	break;
	 }
	}
	cout<<ans;
	return 0;
 } 
