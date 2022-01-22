#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int A, B,min,max;

	printf("请输入两个整数。");
	printf("整数A：");
	scanf("%d", &A);
	printf("整数B：");
	scanf("%d", &B);

	max = (A - B) > 0 ? A : B;
	min = (A - B) < 0 ? A : B;

		if (max - min <= 10 || max - min == 0)
			printf("他们的差小于等于10");
		else 
			printf("他们的差大于等于11");
	
	return 0;
}