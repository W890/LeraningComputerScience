#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("请输入一个整数：");
	scanf("%d", &no);

	printf("最后一位是%d。 \n", no % 10);

	return 0;
}