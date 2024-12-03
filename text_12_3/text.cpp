#include <stdio.h>
#include <string.h>

int main() {
    char str[1000000]; // 假设输入的字符串不超过999999个字符
    const char* target = "chuanzhi";
    int count = 0;
    scanf("%s", str); // 从标准输入读取字符串

    int len = strlen(target);
    int str_len = strlen(str);
    for (int i = 0; i <= str_len - len; ++i) {
        int match = 1; // 假设匹配
        for (int j = 0; j < len; ++j) {
            if (str[i + j] != target[j]) {
                match = 0; // 如果有任何字符不匹配，设置为不匹配
                break;
            }
        }
        if (match) {
            count++; // 如果匹配，增加计数
            i += len - 1; // 跳过已匹配的部分，继续查找下一个可能的匹配
        }    }

    printf("%d\n", count); // 输出结果
    return 0;
}