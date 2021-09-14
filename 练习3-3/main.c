#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int a;

	printf("请输入一个整数：");
	scanf("%d", &a);

	printf("绝对值是%d。", a = abs(a));

	return 0;
}