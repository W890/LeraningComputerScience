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

	printf("������һ��������");
	scanf("%d", &n);
	printf("������ƽ����%d��\n", sqr_int(n));
	printf("������һ��ʵ����");
	scanf("%lf", &x);
	printf("������ƽ����%f��\n", sqr_double(x));

	return 0;
}