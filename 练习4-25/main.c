#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, j, len;

	puts("����������һ�����µĽ�������");
	printf("�������м��㣺");
	scanf("%d", &len);

	for (i = 1; i <= len; i++) {
		for (j = 0; j < i - 1; j++) {
			putchar(' ');
		}
		for (j = 0; j < (len - i) * 2 + 1; j++) {
			printf("%d", i % 10);
		}
		putchar('\n');
	}

	return 0;
}