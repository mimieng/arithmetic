#include <stdio.h>
#include <stdlib.h>

int main() {
    int T, n, count = 0;
    scanf("%d", &T); // 读取数据组数

    while (T--) {
        scanf("%d", &n); // 读取数组长度
        int* b = (int*)malloc(n * sizeof(int)); // 动态分配数组
        if (!b) {
            printf("Memory allocation failed\n");
            return 1;
        }

        for (int i = 0; i < n; i++) {
            scanf("%d", &b[i]); // 正确读取数组元素
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

        free(b); // 释放动态分配的内存
    }

    printf("%d", count);
    return 0;
}
