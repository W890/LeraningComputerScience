#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int A, B,min,max;

	printf("请输入两个整数。\n");
	printf("整数A：");
	scanf("%d", &A);
	printf("整数B：");
	scanf("%d", &B);

		if ((0 <= A - B && A - B <= 10) || (0 <= B - A && B - A <= 10))
			printf("他们的差小于等于10");
		else 
			printf("他们的差大于等于11");
	
	return 0;
}