#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	double x;

	printf("请输入一个整数：");
	scanf("%d", &n);
	printf("该数的平方是%d。\n", sqr(n));
	printf("请输入一个实数：");
	scanf("%lf", &x);
	printf("该数的平方是%f。\n", sqr(x));

	return 0;
}