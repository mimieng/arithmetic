#include <bits/stdc++.h>  // 包含C++标准库的大部分常用头文件
#define int long long     // 定义int为long long类型，避免整数溢出
using namespace std;      // 使用std命名空间，避免重复输入std::

const int M = 1e6 + 10;   // 定义一个常量M，表示数组的最大大小
int a[M];                 // 定义一个全局数组a，用于存储输入的数值
int n = 0, m = 0;         // 定义全局变量n（数组大小）和m（阈值），初始化为0

// 检查函数，判断当前高度mid是否满足条件
bool check(int mid) {
    int sum = 0;          // 初始化sum为0，用于累加符合条件的数值差
    for (int i = 1; i <= n; i++) {  // 遍历数组a的所有元素
        sum += max(0LL, a[i] - mid);  // 计算每个元素与mid的差值，只累加正数部分
    }
    return sum >= m;      // 返回sum是否大于等于m
}

signed main() {           // 主函数
    cin >> n >> m;        // 读取输入的n和m
    for (int i = 1; i <= n; i++) {  // 读取数组a的元素
        cin >> a[i];      // 将输入的值存入数组a
    }

    int l = 0, r = 1e10;  // 初始化二分查找的左右边界
    while (l < r) {       // 当左边界小于右边界时，执行循环
        int mid = (l + r + 1) / 2;  // 计算中间值mid
        if (check(mid)) {           // 如果当前mid满足条件
            l = mid;                // 更新左边界为mid，继续寻找更大的可行值
        } else {
            r = mid - 1;            // 如果不满足条件，更新右边界为mid-1
        }
    }

    cout << l << endl;  // 输出最终找到的满足条件的最大高度l
    return 0;           // 程序结束
}
