#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("������һ��������");
	scanf("%d", &no);

	if (no % 2)
		puts("��������������");
	else
		puts("��������ż��:");

	return 0;
}