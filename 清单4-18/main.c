#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, j, len;

	puts("����ֱ�������·��ĵ���ֱ�������Ρ�");
	printf("�̱�:");
	scanf("%d", &len);

	for (i = 1; i <= len; i++) {
		for (j = 1; j <= i; j++)
			putchar('*');
		putchar('\n');
	}
	return 0;
}