#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	double a;

	puts("请输入一个实数:");
	scanf("%lf", &a);
	
	printf("你输入的是:%f。\n", a);
}