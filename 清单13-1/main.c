#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fp;

	fp = fopen("abc", "r");

	if (fp == NULL)
		printf("\a无法打开文件\"abc\"。 \n");
	else {
		printf("\a成功打开了文件\"abc\"。 \n");
		fclose(fp);
	}
	return 0;
}