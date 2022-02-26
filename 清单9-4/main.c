#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char name[48];

	printf("请输入您的名字：");
	scanf("%s", name);

	printf("您好，%s先生/女士！！\n", name);

	return 0;
}