#include<bits/stdc++.h> // ������׼��
#define int long long    // ����intΪlong long�����㴦�����
using namespace std;     // ʹ�ñ�׼�����ռ�
const int N = 2e5 + 10, M = 5e3 + 10;  // �������������С

int a[M][M], pre[M][M]; // �����ά����a�洢�������pre�洢��άǰ׺��

signed main()
{
    int n, m, q; // n��ʾ�����������m��ʾ������q��ʾ��ѯ����
    cin >> n >> m >> q; // �������������������Ͳ�ѯ����

    // ������άǰ׺������
    for (int i = 1; i <= n; i++) // ���������ÿһ��
    {
        for (int j = 1; j <= m; j++) // ���������ÿһ��
        {
            cin >> a[i][j]; // �������a�ĵ�(i, j)��Ԫ��
            // ����ǰ׺��pre[i][j]
            pre[i][j] = a[i][j] + pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1];
        }
    }

    // ����q�β�ѯ
    while (q--)
    {
        int x1, y1, x2, y2; // ��ѯ���Ӿ�������Ͻ�(x1, y1)�����½�(x2, y2)
        cin >> x1 >> y1 >> x2 >> y2; // �����ѯ���Ӿ���Χ
        // �����Ӿ���ĺ�
        int ans = pre[x2][y2] - pre[x2][y1 - 1] - pre[x1 - 1][y2] + pre[x1 - 1][y1 - 1];
        cout << ans << endl; // ����Ӿ���ĺ�
    }
    return 0;
}
