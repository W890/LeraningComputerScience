#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1 , n2 , n3 , max;
	
	puts("请输入三个整数。");
	printf("整数1：");
	scanf("%d", &n1);
	printf("整数2:");
	scanf("%d", &n2);
	printf("整数3:");
	scanf("%d", &n3);

	max = n1;
	if (n2 > max) max = n2;
	if (n3 > max) max = n3;

	printf("最大值是%d。 \n", max);

	return 0;
}