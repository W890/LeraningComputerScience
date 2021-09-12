#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;

	printf("请输入一个整数：");
	scanf("%d", &num);

	printf("符号取反之后的值是%d。 \n", -num);

	return 0;
}