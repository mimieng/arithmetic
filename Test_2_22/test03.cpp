#include<bits/stdc++.h> // 包含标准库
#define int long long    // 定义int为long long，方便处理大数
using namespace std;     // 使用标准命名空间
const int N = 2e5 + 10, M = 5e3 + 10;  // 定义数组的最大大小

int a[M][M], pre[M][M]; // 定义二维数组a存储输入的点权值，pre存储二维前缀和

signed main()
{	
    int n, r; // n表示点的数量，r表示正方形的边长
    cin >> n >> r; // 输入点的数量和正方形的边长

    // 输入每个点的坐标和权值，并更新到数组a中
    for (int i = 1; i <= n; i++)
    {   
        int x, y, z; // x和y是点的坐标，z是点的权值
        cin >> x >> y >> z; // 输入点的坐标和权值
        x++; // 将坐标从0-based转换为1-based
        y++;
        a[x][y] += z; // 将权值z累加到数组a的对应位置
    }

    // 构建二维前缀和数组pre
    for (int i = 1; i <= 5001; i++) {
        for (int j = 1; j <= 5001; j++) {
            // 根据前缀和公式计算pre[i][j]
            pre[i][j] = pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1] + a[i][j];
        }
    }

    int ans = 0; // 初始化最大子矩阵和为0
    // 遍历所有可能的正方形右下角坐标(i, j)
    for (int i = r; i <= 5001; i++) {
        for (int j = r; j <= 5001; j++) {
            int x1 = i - r + 1; // 正方形左上角的x坐标
            int y1 = j - r + 1; // 正方形左上角的y坐标
            int x2 = i; // 正方形右下角的x坐标
            int y2 = j; // 正方形右下角的y坐标

            // 使用二维前缀和公式计算当前正方形的权值和
            int tem = pre[x2][y2] - pre[x2][y1 - 1] - pre[x1 - 1][y2] + pre[x1 - 1][y1 - 1];
            ans = max(ans, tem); // 更新最大子矩阵和
        }
    }

    cout << ans << endl; // 输出最大子矩阵和
    return 0;
}
