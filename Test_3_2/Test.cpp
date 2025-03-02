#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int M = 1e6 + 10; // 适配更大的数组容量

int a[M];
int b[M];
signed main()

{	
	int t;cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		if(a>=b){
		int k=a/b;
		int p=a%b;
		 cout << a << "=" << k << "*" << b << "+" << p << endl;
		}
		
		
	}
	
	return 0;
 } 
