#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int ch, j = 0;
	FILE* fp;
	char fname[FILENAME_MAX];

	printf("�ļ�����");
	scanf("%s", fname);

	if ((fp = fopen(fname, "r")) == NULL)
		printf("\a�ļ���ʧ�ܡ�\n");
	else {
		while ((ch = fgetc(fp)) != EOF)
			j++;
		fclose(fp);
		printf("��%d���ַ�����", j);
	}
	return 0;
}