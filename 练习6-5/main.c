#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sumup(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	return sum;
}
int main(void)
{
	int n;
	printf("整数n：");
	scanf("%d", &n);
	printf("1到%d之间所有整数的和是%d。\n", n, sumup(n));
	return 0;
}