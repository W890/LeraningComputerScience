#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int A, B,C;

	printf("����������������");
	printf("����A��");
	scanf("%d", &A);
	printf("����B��");
	scanf("%d", &B);

	if (A > B)
		C = A - B;
	else 
		C = B - A;
		if (C <= 10 || C >= 11)
			printf("���ǵĲ�С�ڵ���10");
		else 
			printf("���ǵĲ���ڵ���11");
	
	return 0;
}