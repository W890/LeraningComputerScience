#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int cube(int x)
{
	return x * x * x;
}
int main()
{
	int x;

	puts("������һ��������");
	scanf("%d", &x);

	printf("�������������%d��", cube(x));

	return 0;
}