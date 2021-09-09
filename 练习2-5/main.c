#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;

	puts("请输入两个整数。");
	printf("整数a:");  scanf("%d", &a);
	printf("整数b:");  scanf("%d", &b);

	printf("a是b的%f%%", (double)a*100 / b);
}