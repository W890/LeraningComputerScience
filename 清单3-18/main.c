#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("请输入一个整数：");
	scanf("%d", &no);

	if (no % 3 == 0)
		puts("该整数能被3整除。");
	else if ("该整数除以3的余数是1。");
	else
		puts("该数除以3的余数是2。");

		return 0;
}

