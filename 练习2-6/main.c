#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	puts("请输入您的身高："); scanf("%d", &a);
	printf("您的标准体重是%3.1f公斤。", (double)(a - 100) * 0.9);

	return 0;
}