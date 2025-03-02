#include<bits/stdc++.h>
#define int long long 
using namespace std;
const int M=1e6+10;
signed main()
{	
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	cin.tie(0); 
	int t;
	cin>>t;
	assert(t<=100);
	while(t--)
	{
		int l,r;
		cin>>l>>r;
		assert(l<=2000);
		assert(r<=2000);
		int flag=1;
		for(int i=l;i<=r+1;i++)
		{
			if(i%3==0)
			{
				cout<<"YES"<<endl;
				
				flag=0;
				break;
			}
		
				
		}
		if(flag)
			cout<<"NO"<<endl;
	}
	return 0;
 } 
