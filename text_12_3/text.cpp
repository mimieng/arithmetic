#include <stdio.h>
#include <string.h>

int main() {
    char str[1000000]; // ����������ַ���������999999���ַ�
    const char* target = "chuanzhi";
    int count = 0;
    scanf("%s", str); // �ӱ�׼�����ȡ�ַ���

    int len = strlen(target);
    int str_len = strlen(str);
    for (int i = 0; i <= str_len - len; ++i) {
        int match = 1; // ����ƥ��
        for (int j = 0; j < len; ++j) {
            if (str[i + j] != target[j]) {
                match = 0; // ������κ��ַ���ƥ�䣬����Ϊ��ƥ��
                break;
            }
        }
        if (match) {
            count++; // ���ƥ�䣬���Ӽ���
            i += len - 1; // ������ƥ��Ĳ��֣�����������һ�����ܵ�ƥ��
        }    }

    printf("%d\n", count); // ������
    return 0;
}