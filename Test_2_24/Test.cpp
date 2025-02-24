#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e6+5;
int m,n;
int r[N],d[N],s[N],t[N],a[N];

// ���ǰx�������Ƿ��ܱ�����
bool check(int x) {
    for(int i=1; i<=n; i++) a[i] = r[i]; // ��ʼ��ÿ���ʣ���������Ϊr[i]
    for(int i=1; i<=x; i++) {
        a[s[i]] -= d[i]; // ���ٶ�����ʼ���ڵĽ�������
        a[t[i]+1] += d[i]; // ���Ӷ����������ڵ���һ��Ľ�������
    }
    int res = 0; // �����ۻ�ÿ���ʣ���������
    for(int i=1; i<=n; i++) {
        res += a[i]; // �ۻ�ǰһ���ʣ���������
        if(res < 0) return true; // ���ĳһ���ʣ������������㣬����true
    }
    return false; // ����������ʣ������������㹻������false
}

signed main()
{
    ios::sync_with_stdio(false); // ����C++ I/O
    cin.tie(0); cout.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>r[i]; // ����ÿ��Ŀ��ý�������
    for(int i=1;i<=m;i++) cin>>d[i]>>s[i]>>t[i]; // ����ÿ�������Ľ�����������ʼ���ںͽ�������
    for(int i=n;i>=1;i--) r[i]-=r[i-1]; // ����ÿ�������ǰһ��Ŀ��ý��������仯
    int l=0,r=m; // ��ʼ�����ֲ��ҵķ�Χ
    while (l<r){
        int mid=(l+r)/2; // �����м�ֵ
        if(check(mid)) r=mid; // ����м�ֵ��Ӧ�Ķ����޷����㣬��С�ұ߽�
        else l=mid+1; // ����м�ֵ��Ӧ�Ķ����������㣬��С��߽�
    }
    if(check(l)) cout << l << endl; // ������յ�l��Ӧ�Ķ����޷����㣬���l
    else cout << 0 << endl; // ������ж����������㣬���0
}
