#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int n, q;
int num[N];

void check(int cnt, int idx) {
    int tem = pow(10, cnt);  // �����������λ����Ӧ��10����
    for (int i = 0; i < n; i++) {  // ��������ͼ�����
        if (num[i] % tem == idx) {  // ���ͼ�����ĺ�cntλ����������
            cout << num[i] << endl;  // ����Ȿ��ı���
            return;
        }
    }
    cout << -1 << endl;  // ���û���ҵ������-1
}

signed main() {
    cin >> n >> q;  // ������������Ͷ��ߵ�����
    for (int i = 0; i < n; i++) {
        cin >> num[i];  // ����ÿ�����ͼ�����
    }
    sort(num, num + n);  // ��ͼ������������ȷ���ҵ��ķ������������Ǳ�����С��
    while (q--) {
        int cnt, idx;
        cin >> cnt >> idx;  // ����������ĳ��Ⱥ�������
        check(cnt, idx);  // ����check��������ÿ�����ߵ�����
    }
    return 0;
}
