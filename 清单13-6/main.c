#include <stdio.h>

int main()
{
	int ch;
	FILE* fp;
	char fname[FILENAME_MAX];

	printf("文件名：");
	scanf("%s", fname);

	if ((fp = fopen(fname, "r")) == NULL)
		printf("\a文件打开失败。\n");
	else {
		while ((ch = fgetc(fp)) != EOF)
			putchar(ch);
		fclose(fp);
	}
	return 0;
}