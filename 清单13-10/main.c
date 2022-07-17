#define _CRT_SECURE_NO_WARNINGS
#include <ctype.h>
#include <stdio.h>

int main()
{
	int n;
	unsigned long count = 0;
	unsigned char buf[16];
	FILE* fp;
	char fname[FILENAME_MAX];

	printf("文件名：");
	scanf("%s", fname);

	if ((fp = fopen(fname, "rb")) == NULL)
		printf("\a文件打开失败。\n");
	else {
		while ((n = fread(buf, 1, 16, fp)) > 0) {
			int i;

			printf("%08lx", count);

			for (i = 0; i < n; i++)
				printf("%02x", (unsigned)buf[i]);

			if (n < 16)
				for (i = 0; i < n; i++)
					printf(" ");

			for (i = 0; i < n; i++)
				putchar(isprint(buf[i]) ? buf[i] : '.');

			putchar('\n');

			count += 16;
		}
		fclose(fp);
	}
	return 0;
}