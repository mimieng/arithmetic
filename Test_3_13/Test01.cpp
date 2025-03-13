#include <bits/stdc++.h>
using namespace std;

#define int long long
const int M = 105, N = 105; // 稍大于题目中的最大值，避免数组越界

int a[M][N], pre[M][N];

signed main() {
    int n, m;
    cin >> n >> m;

    // 初始化前缀和数组为0
    memset(pre, 0, sizeof(pre));

    // 输入矩阵并计算前缀和
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
            // 前缀和公式：pre[i][j] = a[i][j] + 上方的和 + 左边的和 - 左上方的和（避免重复计算）
            pre[i][j] = a[i][j] + pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1];
        }
    }

    int ans = 0; // 初始化答案为0
    int l = min(n, m); // 最大可能的正方形边长

    // 从大到小尝试边长，找到第一个满足条件的即可
    for (int k = l; k >= 1; k--) {
        bool found = false;
        // 遍历所有可能的右下角坐标(i,j)，检查边长为k的正方形
        for (int i = k; i <= n; i++) {
            for (int j = k; j <= m; j++) {
                // 计算以(i,j)为右下角，边长为k的正方形的和
                int sum = pre[i][j] - pre[i - k][j] - pre[i][j - k] + pre[i - k][j - k];
                if (sum == k * k) { // 如果和等于k*k，说明所有元素都是1
                    ans = k;
                    found = true;
                    break; // 找到后立即退出循环
                }
            }
            if (found) break; // 找到后立即退出循环
        }
        if (found) break; // 找到后立即退出循环
    }

    cout << ans << endl;

    return 0;
}
