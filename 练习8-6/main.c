#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num;
	int i;
	int factorial = 1;

	printf("请输入一个整数:");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++) {
		factorial *= i;
	}
	printf("整数%d的阶乘为%d\n", num, factorial);

	return 0;
}