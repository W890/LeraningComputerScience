#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sqr(int x)
{
	return x * x;
}
int diff(int a, int b)
{
	return (a > b ? a - b : b - a);
}
int main()
{
	int x, y;

	puts("����������������");
	printf("����x:");
	scanf("%d", &x);
	printf("����y:");
	scanf("%d", &y);

	printf("x��y��ƽ������%d��\n", diff(sqr(x), sqr(x)));

	return 0;
}