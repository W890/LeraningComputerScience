#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int max3(int a, int b, int c)
{
	int max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	return max;
}
int main()
{
	int a, b, c;
	puts("请输入三个整数:");
	printf("整数1：");
	scanf("%d", &a);
	printf("整数2：");
	scanf("%d", &b);
	printf("整数3：");
	scanf("%d", &c);

	printf("最大值是%d。\n", max3(a, b, c));

	return 0;
}