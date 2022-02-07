#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
double power(double x, int n)
{
	double tmp = 1.0;

	while (n-- > 0)
		tmp *= x;
	return tmp;
}
int main()
{
	double a;
	int b;

	printf("求a的b次幂。\n");
	printf("实数a:");
	scanf("%1f", &a);
	printf("整数b:");
	scanf("%d", &b);

	printf("%.2f的%d次幂是%.2f。\n", a, b, power(a, b));

	return 0;
}