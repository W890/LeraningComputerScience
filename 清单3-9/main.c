#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("������һ��������");
	scanf("%d", &no);

	if (no == 0)
		puts("������Ϊ0��");
	else if (no > 0)
		puts("������Ϊ������");
	else
		puts("��������������");

		return 0;
}