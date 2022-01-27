#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int no,i;

	printf("请输入一个整数：");
	scanf("%d", &no);

	for (i = 1; i <= no; i++) {
		printf("%d", i % 10);
	}
	return 0;
}