#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int cube(int x)
{
	return x * x * x;
}
int main()
{
	int x;

	puts("请输入一个整数：");
	scanf("%d", &x);

	printf("这个数的立方是%d。", cube(x));

	return 0;
}