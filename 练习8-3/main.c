#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define swap(type, a, b)  {type x = a; a = b; b = x;}
int main()
{
	int a, b;
	puts("请输入两个整数：");
	scanf("%d %d", &a, &b);
	swap(int, a, b);
	printf("%d %d", a, b);

	return 0;
}