#include<bits/stdc++.h> // 包含标准库
#define int long long    // 定义int为long long，方便处理大数
using namespace std;     // 使用标准命名空间
const int N = 2e5 + 10, M = 5e3 + 10;  // 定义数组的最大大小

int a[M][M], pre[M][M]; // 定义二维数组a存储输入矩阵，pre存储二维前缀和

signed main()
{
    int n, m, q; // n表示矩阵的行数，m表示列数，q表示查询次数
    cin >> n >> m >> q; // 输入矩阵的行数、列数和查询次数

    // 构建二维前缀和数组
    for (int i = 1; i <= n; i++) // 遍历矩阵的每一行
    {
        for (int j = 1; j <= m; j++) // 遍历矩阵的每一列
        {
            cin >> a[i][j]; // 输入矩阵a的第(i, j)个元素
            // 计算前缀和pre[i][j]
            pre[i][j] = a[i][j] + pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1];
        }
    }

    // 处理q次查询
    while (q--)
    {
        int x1, y1, x2, y2; // 查询的子矩阵的左上角(x1, y1)和右下角(x2, y2)
        cin >> x1 >> y1 >> x2 >> y2; // 输入查询的子矩阵范围
        // 计算子矩阵的和
        int ans = pre[x2][y2] - pre[x2][y1 - 1] - pre[x1 - 1][y2] + pre[x1 - 1][y1 - 1];
        cout << ans << endl; // 输出子矩阵的和
    }
    return 0;
}
