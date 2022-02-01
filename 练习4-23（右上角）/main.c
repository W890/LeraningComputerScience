#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, j, len;

	puts("生成直角在右上方的等腰直角三角形。");
	printf("短边：");
	scanf("%d", &len);

	for (i = len; i >= 0; i--) {
		for (j = 1; j <= len - i; j++)
			putchar(' ');
			for (j = 1; j <= i; j++)
				putchar('*');
		putchar('\n');

	}
	return 0;
}