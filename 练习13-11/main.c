#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fp;
	double num[10] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.1 };

	if ((fp = fopen("num.dat", "wb")) == NULL)
		printf("\a�ļ���ʧ�ܡ�\n");
	else {
		fwrite(&num, sizeof(double), 10, fp);
		fclose(fp);
	}

	if ((fp = fopen("num.dat", "rb")) == NULL)
		printf("\a�ļ���ʧ�ܡ�\n");
	else {
		fread(&num, sizeof(double), 10, fp);
		printf("���ļ���ȡ����Ϊ%2.5f��\n", num);
		fclose(fp);
	}
	return 0;
}