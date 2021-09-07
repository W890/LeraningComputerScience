#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int main()
{
	int no;

	printf("请输入一个整数：");
	scanf("%d", &no);

	printf("该整数加上12的结果是%d。 \n", no + 12);

	return 0;
}