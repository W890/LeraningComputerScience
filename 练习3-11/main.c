#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int A, B,C;

	printf("请输入两个整数。");
	printf("整数A：");
	scanf("%d", &A);
	printf("整数B：");
	scanf("%d", &B);

	if (A > B)
		C = A - B;
	else 
		C = B - A;
		if (C <= 10 || C >= 11)
			printf("他们的差小于等于10");
		else 
			printf("他们的差大于等于11");
	
	return 0;
}