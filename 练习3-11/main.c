#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int A, B,min,max;

	printf("����������������");
	printf("����A��");
	scanf("%d", &A);
	printf("����B��");
	scanf("%d", &B);

	max = (A - B) > 0 ? A : B;
	min = (A - B) < 0 ? A : B;

		if (max - min <= 10 || max - min == 0)
			printf("���ǵĲ�С�ڵ���10");
		else 
			printf("���ǵĲ���ڵ���11");
	
	return 0;
}