#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("������һ��������");
	scanf("%d", &no);

	if (no > 0)
		if (no % 2 == 0)
			puts("������Ϊż����");
		else
			puts("������Ϊ������");
	else
		puts("������Ĳ��������� \a\n");

	return 0;
}