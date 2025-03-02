#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    
    // 断言确保输入的 n 和 q不超过题目给定的最大限制
    assert(n <= 2e5);
    assert(q <= 2e5);
    
    map<int, int> mp; // 用于统计每种果子的数量

    // 读取每个果子的类型，并统计其出现次数
    for(int i = 1, x; i <= n; i++) {
        cin >> x;
        assert(x <= 1e6); // 断言确保果子的类型不超过题目给定的最大限制
        mp[x]++; // 统计每种果子的数量
    }

    // 计算每个总数对应的果子数量总和
    vector<int> cnt(n + 1, 0); // cnt[i] 表示总数为 i 的果子总和
    for(auto & [key, val] : mp) {
        cnt[val] += val; // 例如，如果某种果子共有 val 个，那么当总数为 val 时，这些果子都会被打下来
    }

    // 计算前缀和，以便快速查询前d天被打下果子的总数
    for(int i = 1; i <= n; i++) {
        cnt[i] += cnt[i - 1]; // 前缀和数组，cnt[i] 表示前 i 天被打下果子的总数
    }

    // 处理每个查询
    while(q--) {
        int d;
        cin >> d;
        d = min(d, n); // 如果查询的天数超过n，直接取n
        cout << n - cnt[d] << " "; // 打印第d天晚上剩下的果子数量
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}
