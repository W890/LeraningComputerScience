#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;

	puts("����������������");
	printf("����a:"); scanf("%d", &a);
	printf("����b:"); scanf("%d", &b);

	printf("a����b��%d��%d�� \n", a / b, a % b);

	return 0;
}