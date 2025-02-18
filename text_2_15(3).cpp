#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int n, q;
int num[N];

void check(int cnt, int idx) {
    int tem = pow(10, cnt);  // 计算需求码的位数对应的10的幂
    for (int i = 0; i < n; i++) {  // 遍历所有图书编码
        if (num[i] % tem == idx) {  // 如果图书编码的后cnt位等于需求码
            cout << num[i] << endl;  // 输出这本书的编码
            return;
        }
    }
    cout << -1 << endl;  // 如果没有找到，输出-1
}

signed main() {
    cin >> n >> q;  // 输入书的数量和读者的数量
    for (int i = 0; i < n; i++) {
        cin >> num[i];  // 输入每本书的图书编码
    }
    sort(num, num + n);  // 对图书编码进行排序，确保找到的符合条件的书是编码最小的
    while (q--) {
        int cnt, idx;
        cin >> cnt >> idx;  // 输入需求码的长度和需求码
        check(cnt, idx);  // 调用check函数处理每个读者的需求
    }
    return 0;
}
