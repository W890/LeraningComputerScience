#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;

	printf("������һ��������");
	scanf("%d", &num);

	if ((num % 10) == 5)
		puts("�������ĸ�λ����5��");
	else
		puts("�������ĸ�λ������5��");

	return 0;
}