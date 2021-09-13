#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("请输入一个整数：");
	scanf("%d", &no);

	if (no % 2)
		puts("该整数是奇数。");
	else
		puts("该整数是偶数:");

	return 0;
}