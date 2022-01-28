#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, i;

	printf("n的值：");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		printf("%d的二次方是%d\n", i,i*i);
	}
	return 0;
}