#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
double power(double x, int n)
{
	int i;
	double tmp = 1.0;

	for (i = 1; i <= n; i++)
		tmp *= x;
	return tmp;
}
int main()
{
	double a;
	int b;

	printf("��a��b���ݡ�\n");
	printf("ʵ��a:");
	scanf("%1f", &a);
	printf("����b:");
	scanf("%d", &b);

	printf("%.2f��%d������%.2f��\n", a, b, power(a, b));

	return 0;
}