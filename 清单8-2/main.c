#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	double x;

	printf("������һ��������");
	scanf("%d", &n);
	printf("������ƽ����%d��\n", sqr(n));
	printf("������һ��ʵ����");
	scanf("%lf", &x);
	printf("������ƽ����%f��\n", sqr(x));

	return 0;
}