#include<bits/stdc++.h> 
using namespace std;
const int M=1e3+10;
int num[M]; 
signed main()
{	
 	int n;
 	cin>>n;
 	map<int ,int>mp;
 	for(int i=0;i<n;i++)
 	{
 		int x;
 		cin>>x;
 		mp[x]++;
	 }
	for(auto i:mp)
	{
		cout<<i.first<<' '<<i.second<<endl;
	}
	return 0;
}
