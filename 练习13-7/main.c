#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int ch, j = 0;
	FILE* fp;
	char fname[FILENAME_MAX];

	printf("文件名：");
	scanf("%s", fname);

	if ((fp = fopen(fname, "r")) == NULL)
		printf("\a文件打开失败。\n");
	else {
		while ((ch = fgetc(fp)) != EOF)
			j++;
		fclose(fp);
		printf("有%d个字符数。", j);
	}
	return 0;
}