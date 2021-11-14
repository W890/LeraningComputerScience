#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2, n3,min;

	puts("请输入三个整数：");
	printf("整数一：");
	scanf("%d", &n1);
	printf("整数二：");
	scanf("%d", &n2);
	printf("整数三：");
	scanf("%d", &n3);

	min = n1;
	if (n2 < min) min = n2;
	if (n3 < min) min = n3;

	printf("这三个数中最小的数是%d。\n", min);

	return 0;
}