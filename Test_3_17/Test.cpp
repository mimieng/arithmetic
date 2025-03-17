#include<bits/stdc++.h>
using namespace std;
#define int long long 
const int M=1e5+10;
vector<int > arr(M);
int sum=0;
signed main()
{	
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	sort(arr.begin()+1,arr.begin()+1+n);
	int l=0,r=n;
	while(l<r)
	{
		sum+=pow(arr[l]-arr[r],2);
		++l;
		sum+=pow(arr[r]-arr[l],2);
		--r;
	}
	cout<<sum;
	return 0;
 } 
