#include<bits/stdc++.h> // 包含标准库
#define int long long    // 定义int为long long，方便处理大数
using namespace std;     // 使用标准命名空间
const int N = 2e5 + 10;  // 定义数组的最大大小

int a[N], pre[N];        // 定义数组a存储输入数据，pre存储前缀和

signed main()            // 主函数
{   
    std::ios::sync_with_stdio(false); // 关闭cin和scanf的同步，加速输入输出
    cin.tie(0); cout.tie(0);          // 解绑cin和cout的绑定，加速输出

    int n, q;                         // n表示数组长度，q表示查询次数
    cin >> n >> q;                    // 输入n和q

    // 输入数组并计算前缀和
    for (int i = 1; i <= n; i++)      
    {
        cin >> a[i];                  // 输入数组a的第i个元素
        pre[i] = pre[i - 1] + a[i];   // 计算前缀和pre[i] = pre[i-1] + a[i]
    }
//1
//3
//7
    // 处理q次查询
    while (q--)                       
    {
        int l, r;                     // l和r表示查询的区间
        cin >> l >> r;                // 输入查询区间
        cout << pre[r] - pre[l - 1] << endl; // 输出区间和，利用前缀和公式：pre[r] - pre[l-1]
    }
    return 0;                         // 返回0，程序结束
}
