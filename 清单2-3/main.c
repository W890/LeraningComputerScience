#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;

	puts("请输入两个整数。");
	printf("整数a:"); scanf("%d", &a);
	printf("整数b:"); scanf("%d", &b);

	printf("a除以b得%d余%d。 \n", a / b, a % b);

	return 0;
}