#include<bits/stdc++.h> 
using namespace std;
const int N=1e3+10;
int n,q;
struct Node{
	string name;z
	int chi,math,eng;
	int sum,id;
}stu[N];
bool cmp(Node a,Node b)
{
	if(a.sum!=b.sum)
		return a.sum>b.sum;
	else if(a.id!=b.id)
		return a.id<b.id;

}
signed main()
{	
	 int n;
	 cin>>n;
	 for(int i=1;i<=n;i++)
	 {
	 	int chi,math,eng;
	 	string name;
	 	cin>>name>>chi>>math>>eng;
	 	stu[i]={name,chi,math,eng,chi+math+eng,i};
	  } 
	  sort(stu+1,stu+1+n,cmp); 
	  cout<<stu[1].name<<' '<<stu[1].chi<<' '<<stu[1].math<<' '<<stu[1].eng;
	return 0;
}
