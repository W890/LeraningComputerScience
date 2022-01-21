#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int A, B, C;
	
	printf("请输入三个整数：\n");
	printf("整数A:");
	scanf("%d", &A);
	printf("整数B：");
	scanf("%d", &B);
	printf("整数C：");
	scanf("%d", &C);

	if (A == B && B == C)
	printf("三个值都相等。");
	else if (A == B || B == C ||A == C)
	printf("两个值都相等。");
	else
		printf("三个值都不相同。");

	return 0;
}