#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main()
{
	int n;
	char ch[1024];
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
			while ((n = fread(ch, sizeof(char), 1024, sfp)) > 0) {
				fwrite(ch, sizeof(char), n, dfp);
			}
		}
		fclose(sfp);
	}
	return 0;
}