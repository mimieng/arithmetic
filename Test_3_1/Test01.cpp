#include<bits/stdc++.h> // 包含所有标准库头文件
#define int long long   // 将 int 定义为 long long，以支持更大的整数范围
const int M = 1e7 + 10; // 定义常量 M，表示数组的最大大小（10^7 + 10）
using namespace std;    // 使用标准命名空间

int a[M];               // 数组 a，用于存储输入的整数
int n, k;               // n: 数组的大小，k: 需要选择的数字个数
int ans = 0;            // 答案变量，用于记录满足条件的组合数量

// 判断一个数是否为素数
bool is_prime(int sum) {
    if (sum < 2)        // 如果 sum 小于 2，不是素数
        return false;
    for (int i = 2; i < sum / i; i++) { // 遍历从 2 到 sqrt(sum) 的所有数
        if (sum % i == 0) // 如果 sum 能被 i 整除，不是素数
            return false;
    }
    return true;        // 如果没有找到因数，sum 是素数
}

// 深度优先搜索函数
void dfs(int cnt, int sum, int st) {
    if (cnt == k) {      // 如果已经选择了 k 个数
        if (is_prime(sum)) // 如果当前的和是素数
            ans++;       // 答案加 1
        return;          // 返回
    }
    for (int i = st; i <= n; i++) { // 从 st 开始，遍历所有可能的数字
        dfs(cnt + 1, sum + a[i], i + 1); // 递归调用，选择下一个数字
    }
}

// 主函数
signed main() {
    cin >> n >> k;       // 读取数组大小 n 和需要选择的数字个数 k
    for (int i = 1; i <= n; i++) { // 读取数组 a 的元素
        cin >> a[i];
    }
    dfs(0, 0, 1);        // 从第 1 个数字开始，初始选择 0 个数字，初始和为 0
    cout << ans << endl; // 输出满足条件的组合数量
    return 0;            // 返回 0，表示程序正常结束
}
