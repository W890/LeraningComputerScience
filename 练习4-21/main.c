#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int height, i, j;

	printf("����һ��������\n");
	printf("�������м��㣺");
	scanf("%d", &height);

	for (i = 0; i < height; i++) {
		for (j = 0; j < height; j++) {
			putchar('*');
		}
		putchar('\n');
	}
	return 0;
}