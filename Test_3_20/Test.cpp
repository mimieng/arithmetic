#include<bits/stdc++.h>
#define int long long
using namespace std;
int a,b,c;
int mi(int a,int b)
{	int ans=1;
	while(b!=0)
	{
		int p=b & 1;
		if(p){
			ans=(ans*a)%c; 
		} 
		b>>=1;
		a=(a*a)%c;
	}
	return ans%c;
}

signed main()
{	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0); 
	cin>>a>>b>>c;
	int ans=mi(a,b);
	cout<<a<<"^"<<b<<" "<<"mod"<<" "<<c<<"="<<ans<<endl;
	return 0;
 } 
