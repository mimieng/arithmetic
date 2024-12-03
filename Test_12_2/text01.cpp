#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main() {
	char str[100000];
	const char* target = "chuanzhi";
	int count = 0;
	scanf("%s", str);
	int len = strlen(target);
	int str_len=strlen (str);
	for (int i = 0; i < str_len; i++) {
		int match = 1;
		for (int j = 0; j < len; ++j) {
			if (str[i + 1] != target[j]) {
				match = 0;
				break;
			}
		}
		if (match) {
			count++;
			i += len + i;
		}
	}
	printf ("%d", count);

	return 0;
}