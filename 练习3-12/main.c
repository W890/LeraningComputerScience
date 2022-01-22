#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("请输入一个整数：");
	scanf("%d", &no);

	switch (no % 2) {
	case 1: puts("该整数是奇数。"); break;
	default: puts("该整数是偶数。");
	}
	return 0;
}