#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, j, a, b, height, length;

	printf("�����ǻ�һ��������\n");
	printf("һ�ߣ�");
	scanf("%d", &a);
	printf("��һ�ߣ�");
	scanf("%d", &b);

	length = (a > b) ? a : b;
	height = (a < b) ? a : b;

	for (i = 0; i < height; i++) {
		for (j = 0; j < length; j++) {
			putchar('*');
		}
		putchar('\n');
	}
	return  0;
}