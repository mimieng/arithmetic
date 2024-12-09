#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m; // 读取两个数组的大小

    int a[n], b[m]; // 根据输入的大小动态分配数组空间

    int count = 0; // 初始化计数器
    for (int i = 0; i < n; i++) {
        cin >> a[i]; // 读取数组a的元素
    }
    for (int j = 0; j < m; j++) {
        cin >> b[j]; // 读取数组b的元素
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                count++; // 如果找到相同的元素，增加计数
            }
        }
    }
    cout << count << endl; // 输出结果
    return 0;
}