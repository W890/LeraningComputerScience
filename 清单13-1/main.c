#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fp;

	fp = fopen("abc", "r");

	if (fp == NULL)
		printf("\a�޷����ļ�\"abc\"�� \n");
	else {
		printf("\a�ɹ������ļ�\"abc\"�� \n");
		fclose(fp);
	}
	return 0;
}