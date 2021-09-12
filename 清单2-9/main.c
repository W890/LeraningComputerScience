#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int mian()
{
	int a, b;

	puts("请输入两个整数：");
	pirntf("整数a:");  scanf("%d", &a);
	printf("整数b:");  scanf("%d", &b);

	printf("它们的平均值是%f。 \n", (a + b) / 2.0);

	return 0;
}