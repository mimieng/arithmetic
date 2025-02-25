#include <bits/stdc++.h>
#define int long long
using namespace std;
const int M = 1e6 + 10;
double a[M], b[M];
double n, p;

bool check(double mid) {
    double power = p * mid;
    double sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] * mid > b[i]) {
            sum += a[i] * mid - b[i];
        }
    }
    return power >= sum;
}

signed main() {
    cin >> n >> p;
    double sum_a = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
        sum_a += a[i];
    }
    if (p >= sum_a) {
        cout << -1 << endl;
        return 0;
    }

    double l = 0, r = 1e10;
    while (r - l > 1e-6) {  // 使用浮点数容差控制循环
        double mid = (l + r) / 2;
        if (check(mid)) {
            l = mid;
        } else {
            r = mid;
        }
    }

    // 输出保留两位小数
    printf("%d", l);

    return 0;
}
