#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, j;
	int height, width;

	printf("����������һ�������Ρ�");
	printf("�ߣ�");
	scanf("%d", &height);
	printf("��");
	scanf("%d", &width);

	for (i = 1; i <= height; i++) {
		for (j = 1; j <= width; i++)
			putchar('*');
		putchar('\n');
	}
	return 0;
}