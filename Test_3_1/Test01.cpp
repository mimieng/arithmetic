#include<bits/stdc++.h> // �������б�׼��ͷ�ļ�
#define int long long   // �� int ����Ϊ long long����֧�ָ����������Χ
const int M = 1e7 + 10; // ���峣�� M����ʾ���������С��10^7 + 10��
using namespace std;    // ʹ�ñ�׼�����ռ�

int a[M];               // ���� a�����ڴ洢���������
int n, k;               // n: ����Ĵ�С��k: ��Ҫѡ������ָ���
int ans = 0;            // �𰸱��������ڼ�¼�����������������

// �ж�һ�����Ƿ�Ϊ����
bool is_prime(int sum) {
    if (sum < 2)        // ��� sum С�� 2����������
        return false;
    for (int i = 2; i < sum / i; i++) { // ������ 2 �� sqrt(sum) ��������
        if (sum % i == 0) // ��� sum �ܱ� i ��������������
            return false;
    }
    return true;        // ���û���ҵ�������sum ������
}

// ���������������
void dfs(int cnt, int sum, int st) {
    if (cnt == k) {      // ����Ѿ�ѡ���� k ����
        if (is_prime(sum)) // �����ǰ�ĺ�������
            ans++;       // �𰸼� 1
        return;          // ����
    }
    for (int i = st; i <= n; i++) { // �� st ��ʼ���������п��ܵ�����
        dfs(cnt + 1, sum + a[i], i + 1); // �ݹ���ã�ѡ����һ������
    }
}

// ������
signed main() {
    cin >> n >> k;       // ��ȡ�����С n ����Ҫѡ������ָ��� k
    for (int i = 1; i <= n; i++) { // ��ȡ���� a ��Ԫ��
        cin >> a[i];
    }
    dfs(0, 0, 1);        // �ӵ� 1 �����ֿ�ʼ����ʼѡ�� 0 �����֣���ʼ��Ϊ 0
    cout << ans << endl; // ��������������������
    return 0;            // ���� 0����ʾ������������
}
