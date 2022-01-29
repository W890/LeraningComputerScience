#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, i;
	int j = 0;

	printf("整数值：");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		if (n % i == 0) {
			printf("%d \n", i);
			j++;
		}
	printf("约数有%d个。", j);

	return 0;
}