#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int max2(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}
int main()
{
	int n1, n2;
	
	puts("����������������");
	printf("����1��");
	scanf("%d", &n1);
	printf("����2��");
	scanf("%d", &n2);

	printf("�ϴ��������%d��\n", max2(n1, n2));

	return 0;
}