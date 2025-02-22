#include<bits/stdc++.h> // ������׼��
#define int long long    // ����intΪlong long�����㴦�����
using namespace std;     // ʹ�ñ�׼�����ռ�
const int N = 2e5 + 10, M = 5e3 + 10;  // �������������С

int a[M][M], pre[M][M]; // �����ά����a�洢����ĵ�Ȩֵ��pre�洢��άǰ׺��

signed main()
{	
    int n, r; // n��ʾ���������r��ʾ�����εı߳�
    cin >> n >> r; // �����������������εı߳�

    // ����ÿ����������Ȩֵ�������µ�����a��
    for (int i = 1; i <= n; i++)
    {   
        int x, y, z; // x��y�ǵ�����꣬z�ǵ��Ȩֵ
        cin >> x >> y >> z; // �����������Ȩֵ
        x++; // �������0-basedת��Ϊ1-based
        y++;
        a[x][y] += z; // ��Ȩֵz�ۼӵ�����a�Ķ�Ӧλ��
    }

    // ������άǰ׺������pre
    for (int i = 1; i <= 5001; i++) {
        for (int j = 1; j <= 5001; j++) {
            // ����ǰ׺�͹�ʽ����pre[i][j]
            pre[i][j] = pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1] + a[i][j];
        }
    }

    int ans = 0; // ��ʼ������Ӿ����Ϊ0
    // �������п��ܵ����������½�����(i, j)
    for (int i = r; i <= 5001; i++) {
        for (int j = r; j <= 5001; j++) {
            int x1 = i - r + 1; // ���������Ͻǵ�x����
            int y1 = j - r + 1; // ���������Ͻǵ�y����
            int x2 = i; // ���������½ǵ�x����
            int y2 = j; // ���������½ǵ�y����

            // ʹ�ö�άǰ׺�͹�ʽ���㵱ǰ�����ε�Ȩֵ��
            int tem = pre[x2][y2] - pre[x2][y1 - 1] - pre[x1 - 1][y2] + pre[x1 - 1][y1 - 1];
            ans = max(ans, tem); // ��������Ӿ����
        }
    }

    cout << ans << endl; // �������Ӿ����
    return 0;
}
