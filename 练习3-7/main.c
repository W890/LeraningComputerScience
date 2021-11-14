#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n1, n2, n3, n4, max;

	printf("整数一：");
	scanf("%d", &n1);
	printf("整数二：");
	scanf("%d", &n2);
	printf("整数三：");
	scanf("%d", &n3);
	printf("整数四：");
	scanf("%d", &n4);

	n1 = max;
	if (n2 > max) n2 = max;
	if (n3 > max) n3 = max;
	if (n4 > max) n4 = max;

	printf("这四个数中最大的是%d。\n", max);

	return 0;
}