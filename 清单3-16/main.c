#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2, max, min;

	puts("请输入两个整数。");
	printf("整数1：");
	scanf("%d", &n1);
	printf("整数2：");
	scanf("%d", &n2);

	if (n1 > n2) {
		max = n1;
		min = n2;
	} else {
		max = n2;
		min = n1;
	}
	printf("较大的数是%d。 \n", max);
	printf("较小的数是%d。 \n", min);

	return 0;

}