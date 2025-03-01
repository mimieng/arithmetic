#include<bits/stdc++.h> // 包含所有标准库头文件
#define int long long   // 将 int 定义为 long long，以支持更大的整数范围
using namespace std;    // 使用标准命名空间

const int M = 1e6 + 10; // 定义常量 M，表示数组的最大大小（10^6 + 10）
int n;                  // 目标和
int p[M];               // 用于存储当前的组合

// 深度优先搜索函数
void dfs(int sum, int cnt, int st) {
    if (sum > n) {      // 如果当前和已经超过目标和 n
        return;         // 直接返回，剪枝
    }
    if (sum == n) {     // 如果当前和等于目标和 n
        for (int i = 1; i <= cnt - 2; i++) { // 遍历当前组合中的所有元素（除了最后一个）
            cout << p[i] << '+'; // 输出每个元素，并加上 '+'
        }
        cout << p[cnt - 1] << endl; // 输出最后一个元素
        return; // 返回
    }
    for (int i = st; i <= n - 1; i++) { // 从 st 开始，遍历所有可能的数字
        p[cnt] = i; // 将当前数字 i 存入组合数组 p 中
        dfs(sum + i, cnt + 1, i); // 递归调用，更新当前和和组合计数
        p[cnt] = 0; // 回溯：将当前数字从组合数组中移除
    }
    return; // 返回
}

// 主函数
signed main() {
    cin >> n; // 读取目标和 n
    dfs(0, 1, 1); // 从第 1 个数字开始，初始和为 0，初始组合计数为 1
    return 0; // 返回 0，表示程序正常结束

