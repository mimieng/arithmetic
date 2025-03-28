
//题目描述
//JC内长度为L的马路上有一些值周同学，每两个相邻的同学之间的间隔都是1米。我们可以把马路看成一个数轴，马路的一端在数轴0的位置，另一端在L的位置；数轴上的每个整数点，即0,1,2,…L，都有一个值周同学。 由于水宝宝有用一些区间来和ssy搞事情，所以为了避免这种事走漏风声，水宝宝要踹走一些区域的人。这些区域用它们在数轴上的起始点和终止点表示。已知任一区域的起始点和终止点的坐标都是整数，区域之间可能有重合的部分。现在要把这些区域中的人（包括区域端点处的两个人）赶走。你的任务是计算将这些人都赶走后，马路上还有多少个人。
//输入描述:
//第一行有2个整数L和M，L代表马路的长度，M代表区域的数目，L和M之间用一个空格隔开。 接下来的M行每行包含2个不同的整数，用一个空格隔开，表示一个区域的起始点和终止点的坐标
//输出描述:
//1个整数，表示马路上剩余的人的数目。
//示例1
//输入
//复制
//500 3
//150 300
//100 200
//470 471
//输出
//复制
//298
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e8+10;
int a[N],b[N];

signed main()
{
    int L,M;
    cin>>L>>M; // 读取两个整数L和M，分别表示数组的大小和更新操作的次数

    for(int i=0;i<=L;i++)
    {
        a[i]=1; // 初始化数组a的所有元素为1
    }
    b[0]=1; // 初始化b[0]为1
    for(int i=1;i<=L;i++)
    {
        b[i]=a[i]-a[i-1]; // 构建差分数组b
    }

    while(M--)
    {
        int l,r;
        cin>>l>>r; // 读取一对整数l和r，表示一个更新操作的区间
        b[l]-=1; // 对差分数组b进行更新，表示从位置l开始，每个元素都减少1
        b[r+1]+=1; // 表示从位置r+1开始，每个元素都增加1，以抵消从l开始的减少操作
    }

    for(int i=1;i<=L;i++)
    {
        b[i]+=b[i-1]; // 从差分数组b中恢复原数组a
    }

    int ans=0; // 初始化计数器ans为0
    for(int i=0;i<=L;i++)
    {
        if(b[i]>0) // 计算数组b中正数的个数
            ans++;
    }
    cout<<ans<<endl; // 输出结果ans
    return 0;
}
