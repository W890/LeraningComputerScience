#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sqr_int(int x)
{
	return x * x;
}
double sqr_double(double x)
{
	return x * x;
}
int main()
{
	int n;
	double x;

	printf("请输入一个整数：");
	scanf("%d", &n);
	printf("该数的平方是%d。\n", sqr_int(n));
	printf("请输入一个实数：");
	scanf("%lf", &x);
	printf("该数的平方是%f。\n", sqr_double(x));

	return 0;
}