#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, i, sum;

	sum = 0;

	printf("n的值：");
	scanf("%d", &n);

	for (i = 0; i <= n; i++) {
		sum += i;
	}
	printf("1到%d的和为%d", i - 1, sum);

	return 0;
}