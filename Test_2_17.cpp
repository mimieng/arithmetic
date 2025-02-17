#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
struct node
{
	string name;
	int a,b,c;
	int sum;
	int id;
	
}student[N];
bool cmp(node a,node b)
{
	//if(a.sum!=b.sum)
	//a.sum>b.sum
	//return true
	//else
	//return false
	if(a.sum!=b.sum)
	return a.sum>b.sum;
	//分数大的在前面
	 
	else
	return a.id<b.id;
	// 中分相同，id小的在前面 
}
signed main()
{	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{	int a,b,c;
		string name;
		cin>>name>>a>>b>>c;
		student[i]={name,a,b,c,a+b+c,i};
	}
	sort(student,student+n,cmp);
	cout<<student[0].name<<" "<<student[0].a<<' '<<student[0].b<<' '<<student[0].c; 
	return 0;
 } 
