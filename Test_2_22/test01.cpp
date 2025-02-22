#include<bits/stdc++.h> // ������׼��
#define int long long    // ����intΪlong long�����㴦�����
using namespace std;     // ʹ�ñ�׼�����ռ�
const int N = 2e5 + 10, M = 5e3 + 10;  // �������������С

int a[N], pre[30][M]; // ��������a�洢�������ݣ�pre�洢��άǰ׺��

// ��������������ĺ���
void solve() 
{
    int n; // ������ַ�������
    cin >> n;
    string s; // ������ַ���
    cin >> s;

    // ������άǰ׺������
    for (int i = 1; i <= n; i++) 
    { 
        int cnt = s[i - 1] - 'a' + 1; // ��ǰ�ַ�����ĸ��ţ�1��ʾ'a'��2��ʾ'b'��...��
        for (int j = 1; j <= 26; j++) 
        {
            if (j == cnt) // �����ǰ�ַ�����ĸj
                pre[j][i] = pre[j][i - 1] + 1; // ��ǰ��ĸ��ǰ׺�ͼ�1
            else
                pre[j][i] = pre[j][i - 1]; // ������ĸ��ǰ׺�ͱ��ֲ���
        }
    }

    double ans = 0; // ��ʼ�����ֵΪ0
    // ö�����п��ܵ��Ӵ����� [i, j]
    for (int i = 1; i <= n; i++) 
    {
        for (int j = i + 1; j <= n; j++) 
        {
            int l = i, r = j; // �Ӵ������ұ߽�
            double cnt = 0; // ���ڼ��㵱ǰ�Ӵ����ض�ֵ
            // �����Ӵ� [l, r] ��ÿ����ĸ���ִ����������
            for (int k = 1; k <= 26; k++) 
            {
                int tem = pre[k][r] - pre[k][l - 1]; // �Ӵ�����ĸk�ĳ��ִ���
                cnt += tem * (tem - 1) / 2; // ������������ۼ�
            }
            // �������ֵ
            ans = max(ans, cnt / (double)(r - l + 1)); // ��ǰ�Ӵ���ֵΪcnt / (r - l + 1)
        }
    }

    // ������������6λС��
    printf("%.6lf\n", ans);

    // ���ǰ׺�����飬Ϊ��һ�ε�����׼��
    for (int i = 0; i <= 26; i++) 
    {
        for (int j = 1; j <= n; j++) 
        {
            pre[i][j] = 0;
        }
    }
}

// ������
signed main() 
{
    int n; // ������������
    cin >> n;
    while (n--) // ��ÿ��������������solve����
        solve(); 
    return 0;
}
