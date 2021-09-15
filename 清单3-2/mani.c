#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("请输入一个整数：");
	scanf("%d", &no);

	if (no % 2)
		puts("输入的整数是奇数。");

	return 0;
}