#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2, n3,min;

	puts("����������������");
	printf("����һ��");
	scanf("%d", &n1);
	printf("��������");
	scanf("%d", &n2);
	printf("��������");
	scanf("%d", &n3);

	min = n1;
	if (n2 < min) min = n2;
	if (n3 < min) min = n3;

	printf("������������С������%d��\n", min);

	return 0;
}