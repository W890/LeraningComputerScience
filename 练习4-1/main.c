#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int retry=0;

	do {
		int no;

		printf("������һ������:");
		scanf("%d", &no);

		if (no == 0)
			puts("������Ϊ0.");
		else if (no > 0)
			puts("������Ϊ������");
		else
			puts("������Ϊ������");

		printf("Ҫ�ظ�һ����[yes...1/no...0]:");
		scanf("%d", &retry);
	} while (retry == 1);

	return 0;
}