#include<bits/stdc++.h>  // 引入常用头文件
#define int long long    // 将 `int` 定义为 `long long` 类型，方便处理大整数
const int M=1e3+10;      // 定义常量 M，表示网格的最大尺寸
#define PII pair<int,int> // 定义 PII 为 pair<int, int> 的别名，用于存储坐标
char g[M][M];            // 二维字符数组，存储网格内容
bool st[M][M];           // 二维布尔数组，标记某个位置是否被访问过
using namespace std;

// BFS 函数，用于检查以 (x, y) 为起点的连通块是否会“沉没”
bool bfs(int x, int y, int n)
{
    queue<PII>q;          // 定义队列 q，用于 BFS 遍历
    q.push({x,y});        // 将起点 (x, y) 加入队列
    st[x][y]=true;        // 标记起点已被访问
     int dx[] = {0, -1, 0, 1}; // 方向数组，表示上下左右四个方向的偏移量
    int dy[] = {-1, 0, 1, 0};
    int flag=0;           // 标志变量，用于判断当前连通块是否会被沉没

    while(q.size())       // 当队列非空时，继续 BFS 遍历
    {	
        int tmp=0;         // 计数器，用于统计当前点四周的情况
        PII t=q.front();  // 取出队首元素
        q.pop();          // 弹出队首元素
        
        if(!flag)         // 如果尚未确定该连通块是否会沉没
        {
            for(int i=0;i<4;i++) // 遍历四个方向
            {
                int a=dx[i]+t.first;  // 计算相邻点的横坐标
                int b=dy[i]+t.second; // 计算相邻点的纵坐标
                if(a<1||a>n||b<1||b>n) // 如果超出边界
                {
                    tmp++;             // 计数器加 1
                    continue;          // 跳过本次循环
                }
                if(g[a][b]=='#')       // 如果相邻点是陆地
                {
                    tmp++;             // 计数器加 1
                    continue;          // 跳过本次循环
                }
            }
            
        }
        if(tmp==4)         // 如果当前点四周都被水或边界包围
        {
            flag=1;        // 标记该连通块会被沉没
        }
        
        // 扩展连通块，将符合条件的相邻点加入队列
        for(int i=0;i<4;i++){
            int a=dx[i]+t.first;  // 计算相邻点的横坐标
            int b=dy[i]+t.second; // 计算相邻点的纵坐标
            if (a < 1 || a > n || b < 1 || b > n) continue; // 如果超出边界，跳过
            if(st[a][b])continue; // 如果已经访问过，跳过
            if(g[a][b]=='.')continue; // 如果是水，跳过
            if(g[a][b]=='#') // 如果是未访问过的陆地
            {
                q.push({a,b}); // 将相邻点加入队列
                st[a][b]=true; // 标记为已访问
            }
        }
    } 
    return flag == 1; // 返回结果：如果 flag == 1，说明该连通块会被沉没
}

signed main() // 主函数
{	
    int n; // 网格边长
    cin>>n; // 输入网格边长
    for(int i=1;i<=n;i++) // 读取网格内容
    {
        for(int j=1;j<=n;j++)
        {
            cin>>g[i][j]; // 输入每个格子的内容
        }
    }
    int sum=0; // 总连通块数量
    int cnt=0; // 会被沉没的连通块数量
    for(int i=1;i<=n;i++) // 遍历整个网格
    {
        for(int j=0;j<=n;j++) // 注意这里的 j 从 0 开始（可能是一个 bug）
        {
            if(!st[i][j]&&g[i][j]=='#') // 如果当前位置是未访问过的陆地
            {
                if(bfs(i,j,n)) // 调用 BFS 检查是否会沉没
                    cnt++;     // 如果会沉没，计数器加 1
                sum++;         // 总连通块数量加 1
            }
        }
    }
    cout<<sum-cnt<<endl; // 输出不会沉没的连通块数量
    return 0;
}
