#include<bits/stdc++.h>
#define int long long 
using namespace std;
const int M=1e8+10;
char a[M];
signed main()
{	int t;
	while(t--){
		int n,k;
		cin>>n>>k;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		for(int i=1;i<=n;i++){
			if(a[i]=='o')
				{
					a[i]='v';
					cout<<a[i]<<endl;	
				}
		}
	} 
	return 0;
}
