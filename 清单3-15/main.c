#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n1, n2;

	puts("����������������");
	printf("����1��");
	scanf("%d", &n1);
	printf("����2��");
	scanf("%d", &n2);

	printf("���ǵĲ���%d�� \n", (n1 > n2) ? n1 - n2 : n2 - n1);

	return 0;
}