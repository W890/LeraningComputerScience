#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define swap(type, a, b)  {type x = a; a = b; b = x;}
int main()
{
	int a, b;
	puts("����������������");
	scanf("%d %d", &a, &b);
	swap(int, a, b);
	printf("%d %d", a, b);

	return 0;
}