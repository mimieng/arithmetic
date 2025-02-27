#include<bits/stdc++.h> // 包含C++标准库的大部分常用头文件
#define int long long   // 定义int为long long类型，避免整数溢出
const int M=1e6+10;     // 定义常量M，表示数组的最大大小
using namespace std;    // 使用std命名空间，避免重复输入std::

int dx[]={1,-1,10,-10,100,-100,300}; // 定义方向数组，表示可能的移动步长
int dist[M]; // 定义数组dist，用于存储每个位置的最短距离

// 定义BFS函数
void bfs() {
    queue<int> q; // 定义队列q，用于BFS遍历
    q.push(10);   // 将起始位置10加入队列
    q.push(300);  // 将起始位置300加入队列
    memset(dist, -1, sizeof dist); // 初始化dist数组，所有值设为-1，表示未访问
    dist[10] = 0;  // 起始位置10的距离设为0
    dist[300] = 1; // 起始位置300的距离设为1

    while (q.size()) { // 当队列不为空时，继续遍历
        int t = q.front(); // 取出队列的队首元素
        q.pop();           // 将队首元素从队列中移除

        // 遍历所有可能的移动步长
        for (int i = 0; i < 7; i++) {
            int x = dx[i] + t; // 计算新的位置x
            if (x < 10 || x > 300) // 如果新位置x超出范围[10, 300]
                continue;         // 跳过当前方向
            if (dist[x] != -1)    // 如果新位置x已经访问过
                continue;         // 跳过当前方向
            q.push(x);            // 将新位置x加入队列
            dist[x] = dist[t] + 1; // 更新新位置x的距离为当前距离加1
        }
    }
}

signed main() {
    int t; // 定义变量t，表示测试用例的数量
    cin >> t; // 读取测试用例的数量
    bfs();    // 调用BFS函数，预处理dist数组

    while (t--) { // 遍历每个测试用例
        int ans = 0; // 初始化答案ans为0
        for (int i = 1; i <= 4; i++) { // 读取4个数字
            int x;
            cin >> x; // 读取一个数字
            ans += dist[x]; // 累加该数字在dist数组中的值
        }
        cout << ans << endl; // 输出当前测试用例的答案
    }

    return 0; // 程序结束
}
