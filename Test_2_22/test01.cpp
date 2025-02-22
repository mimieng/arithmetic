#include<bits/stdc++.h> // 包含标准库
#define int long long    // 定义int为long long，方便处理大数
using namespace std;     // 使用标准命名空间
const int N = 2e5 + 10, M = 5e3 + 10;  // 定义数组的最大大小

int a[N], pre[30][M]; // 定义数组a存储输入数据，pre存储多维前缀和

// 定义解决单个问题的函数
void solve() 
{
    int n; // 输入的字符串长度
    cin >> n;
    string s; // 输入的字符串
    cin >> s;

    // 构建多维前缀和数组
    for (int i = 1; i <= n; i++) 
    { 
        int cnt = s[i - 1] - 'a' + 1; // 当前字符的字母序号（1表示'a'，2表示'b'，...）
        for (int j = 1; j <= 26; j++) 
        {
            if (j == cnt) // 如果当前字符是字母j
                pre[j][i] = pre[j][i - 1] + 1; // 当前字母的前缀和加1
            else
                pre[j][i] = pre[j][i - 1]; // 其他字母的前缀和保持不变
        }
    }

    double ans = 0; // 初始化最大值为0
    // 枚举所有可能的子串区间 [i, j]
    for (int i = 1; i <= n; i++) 
    {
        for (int j = i + 1; j <= n; j++) 
        {
            int l = i, r = j; // 子串的左右边界
            double cnt = 0; // 用于计算当前子串的特定值
            // 计算子串 [l, r] 中每个字母出现次数的组合数
            for (int k = 1; k <= 26; k++) 
            {
                int tem = pre[k][r] - pre[k][l - 1]; // 子串中字母k的出现次数
                cnt += tem * (tem - 1) / 2; // 计算组合数并累加
            }
            // 更新最大值
            ans = max(ans, cnt / (double)(r - l + 1)); // 当前子串的值为cnt / (r - l + 1)
        }
    }

    // 输出结果，保留6位小数
    printf("%.6lf\n", ans);

    // 清空前缀和数组，为下一次调用做准备
    for (int i = 0; i <= 26; i++) 
    {
        for (int j = 1; j <= n; j++) 
        {
            pre[i][j] = 0;
        }
    }
}

// 主函数
signed main() 
{
    int n; // 测试用例数量
    cin >> n;
    while (n--) // 对每个测试用例调用solve函数
        solve(); 
    return 0;
}
