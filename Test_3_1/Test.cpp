#include<bits/stdc++.h> // �������б�׼��ͷ�ļ�
#define int long long   // �� int ����Ϊ long long����֧�ָ����������Χ
using namespace std;    // ʹ�ñ�׼�����ռ�

const int M = 1e3 + 10; // ���峣�� M����ʾ���ɻ�������1000 + 10��
int n;                  // �ɻ�����
int t[M], d[M], l[M];   // t[i]: �ɻ� i �Ľ���ʱ��, d[i]: �ӳ�ʱ��, l[i]: ��������ʱ��
bool st[M];             // ������飬��ʾ�ɻ��Ƿ��Ѿ�������
int flag = 0;           // ȫ�ֱ�־���������ڱ���Ƿ��ҵ����еĵ��ȷ���

// ���������������
void dfs(int cnt, int sum) {
    if (cnt == n) { // ����Ѿ����������зɻ�
        flag = 1;   // ���ñ�־Ϊ 1����ʾ�ҵ����з���
        return;     // ����
    }
    for (int i = 1; i <= n; i++) { // �������зɻ�
        if (!st[i] && t[i] + d[i] >= sum) { // ����ɻ� i δ�����ȣ��������������
            st[i] = true; // ��Ƿɻ� i Ϊ�ѵ���
            dfs(cnt + 1, max(sum, t[i]) + l[i]); // �ݹ���ã����Ե�����һ�ܷɻ�
            st[i] = false; // ���ݣ���Ƿɻ� i Ϊδ����
        }
    }
}

// ������
signed main() {
    int _t; // ������������
    cin >> _t; // ��ȡ������������
    while (_t--) { // ����ÿ����������
        cin >> n; // ��ȡ�ɻ�����
        flag = 0; // ���ñ�־����
        memset(st, false, sizeof st); // ��ʼ���������Ϊ false
        for (int i = 1; i <= n; i++) { // ��ȡÿ�ܷɻ�����Ϣ
            cin >> t[i] >> d[i] >> l[i];
        }
        dfs(0, 0); // �ӵ� 0 �ܷɻ���ʼ���ȣ���ʼʱ���ܺ�Ϊ 0
        if (flag) // ����ҵ����з���
            cout << "YES" << endl; // ��� YES
        else
            cout << "NO" << endl; // ������� NO
    }
    return 0; // ���� 0����ʾ������������
}
