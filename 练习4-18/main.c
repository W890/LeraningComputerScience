#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, i;

	printf("��ʾ���ٸ�*��");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		putchar('*');
		if (i % 5 == 0)
			putchar('\n');
	}
	return 0;
}