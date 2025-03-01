#include<bits/stdc++.h> // 包含所有标准库头文件
#define int long long   // 将 int 定义为 long long，以支持更大的整数范围
using namespace std;    // 使用标准命名空间

const int M = 1e3 + 10; // 定义常量 M，表示最大飞机数量（1000 + 10）
int n;                  // 飞机数量
int t[M], d[M], l[M];   // t[i]: 飞机 i 的降落时间, d[i]: 延迟时间, l[i]: 降落所需时间
bool st[M];             // 标记数组，表示飞机是否已经被调度
int flag = 0;           // 全局标志变量，用于标记是否找到可行的调度方案

// 深度优先搜索函数
void dfs(int cnt, int sum) {
    if (cnt == n) { // 如果已经调度了所有飞机
        flag = 1;   // 设置标志为 1，表示找到可行方案
        return;     // 返回
    }
    for (int i = 1; i <= n; i++) { // 遍历所有飞机
        if (!st[i] && t[i] + d[i] >= sum) { // 如果飞机 i 未被调度，且满足调度条件
            st[i] = true; // 标记飞机 i 为已调度
            dfs(cnt + 1, max(sum, t[i]) + l[i]); // 递归调用，尝试调度下一架飞机
            st[i] = false; // 回溯，标记飞机 i 为未调度
        }
    }
}

// 主函数
signed main() {
    int _t; // 测试用例数量
    cin >> _t; // 读取测试用例数量
    while (_t--) { // 遍历每个测试用例
        cin >> n; // 读取飞机数量
        flag = 0; // 重置标志变量
        memset(st, false, sizeof st); // 初始化标记数组为 false
        for (int i = 1; i <= n; i++) { // 读取每架飞机的信息
            cin >> t[i] >> d[i] >> l[i];
        }
        dfs(0, 0); // 从第 0 架飞机开始调度，初始时间总和为 0
        if (flag) // 如果找到可行方案
            cout << "YES" << endl; // 输出 YES
        else
            cout << "NO" << endl; // 否则输出 NO
    }
    return 0; // 返回 0，表示程序正常结束
}
