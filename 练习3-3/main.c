#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int a;

	printf("������һ��������");
	scanf("%d", &a);

	printf("����ֵ��%d��", a = abs(a));

	return 0;
}