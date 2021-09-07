#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(coid)
{
	int no;

	printf("请输入一个整数:");
	scanf("%d", &no);   /*读取整数值*/

	printf("该整数减去6的结果是%d。 \n", no-6);

	return 0;
}