#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fp;

	char name[10];

	printf("�������ļ�����");
	scanf("%s", name);

	fp = fopen("name", "w");

	if (fp == NULL)
		printf("\a�޷����ļ�\"%s\"�� \n", name);
	else {
		printf("\a�ɹ������ļ�\"%s\"�� \n", name);
		fclose(fp);
	}
	return 0;
}