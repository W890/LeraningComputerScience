#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int min3(int a, int b, int c)
{
	int min = a;
	if (b < min)
		min = b;
	if (c < min)
		min = c;
	return min;
}
int main()
{
	int a, b, c;
	puts("��������������:");
	printf("����1��");
	scanf("%d", &a);
	printf("����2��");
	scanf("%d", &b);
	printf("����3��");
	scanf("%d", &c);

	printf("��Сֵ��%d��\n", min3(a, b, c));

	return 0;
}