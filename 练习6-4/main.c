#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sqr(int x)
{
	return x * x;
}
int pow4(int x)
{
	return sqr(x) * sqr(x);
}
int main(void)
{
	int x;
	printf("整数x：");
	scanf("%d", &x);
	printf("x的四次幂是%d。\n", pow4(x));
	return 0;
}