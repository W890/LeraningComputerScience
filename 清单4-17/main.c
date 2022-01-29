#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, j;
	int height, width;

	printf("让我们来画一个长方形。");
	printf("高：");
	scanf("%d", &height);
	printf("宽：");
	scanf("%d", &width);

	for (i = 1; i <= height; i++) {
		for (j = 1; j <= width; i++)
			putchar('*');
		putchar('\n');
	}
	return 0;
}