#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int no;

	printf("请输入一个整数：");
	scanf("%d", &no);

	switch (no % 3) {
	case 0: puts("该整数能被3整除。");
	case 1: puts("该数除以3的余数是1。");
	case 2: puts("该数除以3的余数是2。");
	}

	return 0;
}