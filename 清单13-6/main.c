#include <stdio.h>

int main()
{
	int ch;
	FILE* fp;
	char fname[FILENAME_MAX];

	printf("�ļ�����");
	scanf("%s", fname);

	if ((fp = fopen(fname, "r")) == NULL)
		printf("\a�ļ���ʧ�ܡ�\n");
	else {
		while ((ch = fgetc(fp)) != EOF)
			putchar(ch);
		fclose(fp);
	}
	return 0;
}