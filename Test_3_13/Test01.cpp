#include <bits/stdc++.h>
using namespace std;

#define int long long
const int M = 105, N = 105; // �Դ�����Ŀ�е����ֵ����������Խ��

int a[M][N], pre[M][N];

signed main() {
    int n, m;
    cin >> n >> m;

    // ��ʼ��ǰ׺������Ϊ0
    memset(pre, 0, sizeof(pre));

    // ������󲢼���ǰ׺��
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
            // ǰ׺�͹�ʽ��pre[i][j] = a[i][j] + �Ϸ��ĺ� + ��ߵĺ� - ���Ϸ��ĺͣ������ظ����㣩
            pre[i][j] = a[i][j] + pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1];
        }
    }

    int ans = 0; // ��ʼ����Ϊ0
    int l = min(n, m); // �����ܵ������α߳�

    // �Ӵ�С���Ա߳����ҵ���һ�����������ļ���
    for (int k = l; k >= 1; k--) {
        bool found = false;
        // �������п��ܵ����½�����(i,j)�����߳�Ϊk��������
        for (int i = k; i <= n; i++) {
            for (int j = k; j <= m; j++) {
                // ������(i,j)Ϊ���½ǣ��߳�Ϊk�������εĺ�
                int sum = pre[i][j] - pre[i - k][j] - pre[i][j - k] + pre[i - k][j - k];
                if (sum == k * k) { // ����͵���k*k��˵������Ԫ�ض���1
                    ans = k;
                    found = true;
                    break; // �ҵ��������˳�ѭ��
                }
            }
            if (found) break; // �ҵ��������˳�ѭ��
        }
        if (found) break; // �ҵ��������˳�ѭ��
    }

    cout << ans << endl;

    return 0;
}
