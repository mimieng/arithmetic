#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e6+5;
int m,n;
int r[N],d[N],s[N],t[N],a[N];

// 检查前x个订单是否都能被满足
bool check(int x) {
    for(int i=1; i<=n; i++) a[i] = r[i]; // 初始化每天的剩余教室数量为r[i]
    for(int i=1; i<=x; i++) {
        a[s[i]] -= d[i]; // 减少订单开始日期的教室数量
        a[t[i]+1] += d[i]; // 增加订单结束日期的下一天的教室数量
    }
    int res = 0; // 用于累积每天的剩余教室数量
    for(int i=1; i<=n; i++) {
        res += a[i]; // 累积前一天的剩余教室数量
        if(res < 0) return true; // 如果某一天的剩余教室数量不足，返回true
    }
    return false; // 如果所有天的剩余教室数量都足够，返回false
}

signed main()
{
    ios::sync_with_stdio(false); // 加速C++ I/O
    cin.tie(0); cout.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>r[i]; // 输入每天的可用教室数量
    for(int i=1;i<=m;i++) cin>>d[i]>>s[i]>>t[i]; // 输入每个订单的教室数量、开始日期和结束日期
    for(int i=n;i>=1;i--) r[i]-=r[i-1]; // 计算每天相对于前一天的可用教室数量变化
    int l=0,r=m; // 初始化二分查找的范围
    while (l<r){
        int mid=(l+r)/2; // 计算中间值
        if(check(mid)) r=mid; // 如果中间值对应的订单无法满足，缩小右边界
        else l=mid+1; // 如果中间值对应的订单可以满足，缩小左边界
    }
    if(check(l)) cout << l << endl; // 如果最终的l对应的订单无法满足，输出l
    else cout << 0 << endl; // 如果所有订单都能满足，输出0
}
