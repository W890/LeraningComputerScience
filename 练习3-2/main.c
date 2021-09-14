#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("请输入两个整数：");
	scanf("%d", &no);

	if (no == 0)
		puts("该整数为0。");
	else if (no < 0)
		puts("该整数为正数。");
	else
		puts("该整数为负数。");

	return 0;
}