#include<bits/stdc++.h>
#define int long long 
using namespace std;
const int M=2e8+10000000;
int a[M];
int sum=0;
int cont=0;
int check(int l)
{	sum=0;
	cont=0;
	for(int i=1;i<l;i++)
	{	
		if(l%i==0)
		{	
			sum+=i;
			
			}
			
		}
	if((l*sum)%2==0){
		cont++;	
	}
	return 0;
}
signed main()
{	
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	cin.tie(0); 
	int t;
	int n,q;
	cin>>t;
	cin>>n>>q;
	int c=0;
	assert(t<=100);
	while(t--)
	{

		assert(n<=1e6);
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		} 
}
	while(q--){
		int l,r;
		cin>>l>>r;
		assert(q<=1e6);
		c=0;
		assert(r<n);
		for(int i=l;i<=r;i++){
			
			int b=a[i];
			check(b);
			 c+=cont;
		}
		cout<<c<<endl; 
	}
	
	return 0;
 } 
