#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n = 51;

	puts("请输入一个整数：");
	scanf("%d", &n);  
	
	if (n == 51)
		printf("1");
	else
		printf("0");

	return 0;
}