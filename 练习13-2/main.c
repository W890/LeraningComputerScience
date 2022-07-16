#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fp;

	char name[10];

	printf("请输入文件名：");
	scanf("%s", name);

	fp = fopen("name", "w");

	if (fp == NULL)
		printf("\a无法打开文件\"%s\"。 \n", name);
	else {
		printf("\a成功打开了文件\"%s\"。 \n", name);
		fclose(fp);
	}
	return 0;
}