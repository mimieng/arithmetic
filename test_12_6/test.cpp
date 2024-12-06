//#include <bits/stdc++.h>
//using namespace std;
//int main() {
//    int n, v, m, a, ans = 0;
//    cin >> n >> v >> m >> a;
//    while (n) {//还有课的情况
//        for (int i = 1; i <= m && n != 0; i++, n--) {//注意这里一定要判断 n!=0，否则肯定 WA
//            ans += v;//卖课
//        }
//        v += a;//涨价
//    }
//    cout << ans<<endl;
//    return 0;
//}