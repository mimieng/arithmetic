#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m; // ��ȡ��������Ĵ�С

    int a[n], b[m]; // ��������Ĵ�С��̬��������ռ�

    int count = 0; // ��ʼ��������
    for (int i = 0; i < n; i++) {
        cin >> a[i]; // ��ȡ����a��Ԫ��
    }
    for (int j = 0; j < m; j++) {
        cin >> b[j]; // ��ȡ����b��Ԫ��
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                count++; // ����ҵ���ͬ��Ԫ�أ����Ӽ���
            }
        }
    }
    cout << count << endl; // ������
    return 0;
}