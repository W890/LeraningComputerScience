#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;

	printf("请输入一个整数：");
	scanf("%d", &num);

	if (num)
		puts("该整数不是0。");
	else {
		puts("该整数是0。");

		return 0;
	}
}