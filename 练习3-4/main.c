#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int A, B;

	puts("����������������");
	printf("����A:"); 
	scanf("%d", &A);
	printf("����B:"); 
	scanf("%d", &B);

	if (A == B)
		printf("A��B��ȡ�");
	else if (A > B)
		printf("A����B��");
	else 
		printf("AС��B��");

		return 0;
}