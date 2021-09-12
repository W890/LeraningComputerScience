#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("请输入一个整数：");
	scanf("%d", &no);

	printf("它的5倍是%d。 \n", 5 * no);
	return 0;
}