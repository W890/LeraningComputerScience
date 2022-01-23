#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int retry;

	do {
		int a, b,c;

		printf("请输入两个整数：\n");
		printf("整数a:");
		scanf("%d", &a);
		printf("整数b:");
		scanf("%d", &b);

		printf("他们的和是%d。", c = a + b);

		printf("是否继续？[yes...1/no...0]:");
		scanf("%d", &retry);
	} while (retry == 1);
	return 0;
}