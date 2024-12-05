#include <stdio.h>
#include <stdlib.h>

int main() {
    int T, n, count = 0;
    scanf("%d", &T); // ��ȡ��������

    while (T--) {
        scanf("%d", &n); // ��ȡ���鳤��
        int* b = (int*)malloc(n * sizeof(int)); // ��̬��������
        if (!b) {
            printf("Memory allocation failed\n");
            return 1;
        }

        for (int i = 0; i < n; i++) {
            scanf("%d", &b[i]); // ��ȷ��ȡ����Ԫ��
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int sum = b[i] + b[j];
                for (int k = 0; k < n; k++) {
                    if (sum == b[k]) {
                        count++;
                    }
                }
            }
        }

        free(b); // �ͷŶ�̬������ڴ�
    }

    printf("%d", count);
    return 0;
}
