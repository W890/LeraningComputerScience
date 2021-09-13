#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("请输入一个整数:");
	scanf("%d", &no);

	if (no % 5)
		puts("该整数不能被5整除。");
	else
		puts("该整数能被5整除。");
	
		return 0;
}