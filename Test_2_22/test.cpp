#include<bits/stdc++.h> // ������׼��
#define int long long    // ����intΪlong long�����㴦�����
using namespace std;     // ʹ�ñ�׼�����ռ�
const int N = 2e5 + 10;  // �������������С

int a[N], pre[N];        // ��������a�洢�������ݣ�pre�洢ǰ׺��

signed main()            // ������
{   
    std::ios::sync_with_stdio(false); // �ر�cin��scanf��ͬ���������������
    cin.tie(0); cout.tie(0);          // ���cin��cout�İ󶨣��������

    int n, q;                         // n��ʾ���鳤�ȣ�q��ʾ��ѯ����
    cin >> n >> q;                    // ����n��q

    // �������鲢����ǰ׺��
    for (int i = 1; i <= n; i++)      
    {
        cin >> a[i];                  // ��������a�ĵ�i��Ԫ��
        pre[i] = pre[i - 1] + a[i];   // ����ǰ׺��pre[i] = pre[i-1] + a[i]
    }
//1
//3
//7
    // ����q�β�ѯ
    while (q--)                       
    {
        int l, r;                     // l��r��ʾ��ѯ������
        cin >> l >> r;                // �����ѯ����
        cout << pre[r] - pre[l - 1] << endl; // �������ͣ�����ǰ׺�͹�ʽ��pre[r] - pre[l-1]
    }
    return 0;                         // ����0���������
}
