#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int A, B,min,max;

	printf("����������������\n");
	printf("����A��");
	scanf("%d", &A);
	printf("����B��");
	scanf("%d", &B);

		if ((0 <= A - B && A - B <= 10) || (0 <= B - A && B - A <= 10))
			printf("���ǵĲ�С�ڵ���10");
		else 
			printf("���ǵĲ���ڵ���11");
	
	return 0;
}