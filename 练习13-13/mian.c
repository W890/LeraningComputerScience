#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int ch, n;
	FILE* sfp;
	FILE* dfp;
	char sname[FILENAME_MAX];
	char dname[FILENAME_MAX];

	printf("��ԭ�ļ���");
	scanf("%s", sname);
	printf("��Ŀ���ļ���");
	scanf("%s", dname);

	if ((sfp = fopen(sname, "r")) == NULL)
		printf("\aԭ�ļ���ʧ�ܡ�\n");
	else {
		if ((dfp = fopen(dname, "w")) == NULL)
			printf("\aĿ���ļ���ʧ�ܡ� \n");
		else {
			/*while ((ch = fgetc(sfp)) != EOF)
				fputc(ch, dfp);
			fclose(dfp);*/
			while (ch = fread(&ch, sizeof(int), 1, sfp) > 0) {
				fwrite(&ch, sizeof(int), 1, dfp);
			}
		}
		fclose(sfp);
	}
	return 0;
}