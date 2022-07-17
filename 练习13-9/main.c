#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int ch;
	FILE* sfp;
	FILE* dfp;
	char sname[FILENAME_MAX];
	char dname[FILENAME_MAX];

	printf("打开原文件：");
	scanf("%s", sname);
	printf("打开目标文件：");
	scanf("%s", dname);

	if ((sfp = fopen(sname, "r")) == NULL)
		printf("\a原文件打开失败。\n");
	else {
		if ((dfp = fopen(dname, "w")) == NULL)
			printf("\a目标文件打开失败。 \n");
		else {
			while ((ch = fgetc(sfp)) != EOF) {				
				if (ch <= 'z' && ch >= 'a')
					ch -= 32;
				fputc(ch, dfp);
				putchar(ch);
			}
			fclose(dfp);
		}
		fclose(sfp);
	}
	return 0;
}