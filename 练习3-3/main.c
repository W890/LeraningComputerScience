#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;

	printf("请输入一个整数：");
	scanf("%d", &a);

	if (a >= 0)
		printf("绝对值是%d", a);
	else
		printf("绝对值是%d", -a);

	return 0;
}