#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;

	puts("����������������");
	printf("����a:"), scanf("%d", &a);
	printf("����b:"); scanf("%d", &b);

	printf("���ǵ�ƽ��ֵ��%f�� \n", (double)(a + b) / 2);

	return 0;
}