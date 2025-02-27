#include<bits/stdc++.h> // 包含C++标准库的大部分常用头文件
#define int long long   // 定义int为long long类型，避免整数溢出
const int M=1e3+10;     // 定义常量M，表示数组的最大大小
int a[M][M];            // 定义一个二维数组a，用于存储某些值（在这个程序中未使用）
int n,m;                // 定义变量n（行数）和m（列数）
char g[M][M];           // 定义一个二维字符数组g，用于存储地图（例如扫雷游戏的地图）

// 定义方向数组，用于表示8个方向的偏移量
int dx[]={0,-1,-1,-1,0,1,1,1};
int dy[]={-1,-1,0,1,1,1,0,-1};

// 定义命名空间std，避免重复输入std::
using namespace std;

// 定义函数check，用于计算某个位置周围的雷数
int check(int x,int y)
{
    int cnt=0; // 初始化计数器cnt为0，用于记录周围的雷数
    for(int i=0;i<8;i++) // 遍历8个方向
    {
        int a=dx[i]+x; // 计算当前方向的行坐标
        int b=dy[i]+y; // 计算当前方向的列坐标
        if(a<1||a>n||b<1||b>m) // 如果当前坐标超出边界
            continue; // 跳过当前方向
        if(g[a][b]=='*') // 如果当前方向的坐标是雷（'*'）
            cnt++; // 计数器加1
    }    
    return cnt; // 返回周围的雷数
}

signed main()
{
    cin>>n>>m; // 读取行数n和列数m
    for(int i=1;i<=n;i++) // 遍历每一行
    {
        for(int j=1;j<=m;j++) // 遍历每一列
        {
            cin>>g[i][j]; // 读取地图的每个字符
        }
    } 

    // 遍历每一行
    for(int i=1;i<=n;i++)
    {
        // 遍历每一列
        for(int j=1;j<=m;j++)
        {
            if(g[i][j]=='*') // 如果当前字符是雷（'*'）
                cout<<'*'; // 输出'*'
            else // 如果当前字符不是雷
                cout<<check(i,j); // 输出当前位置周围的雷数
        }
        cout<<endl; // 每行输出结束后换行
    }
    return 0; // 程序结束
}
