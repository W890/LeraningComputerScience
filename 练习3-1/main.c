#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int A, B;

	puts("����������������");
	printf("����A:"); scanf("%d", &A);
	printf("����B:"); scanf("%d", &B);

		if (A%B) 
			puts("B����A��Լ����");
		else
			puts("B��A��Լ��");
		
		return 0;
}