#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int max3(int a, int b, int c)
{
	int max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	return max;
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

	printf("���ֵ��%d��\n", max3(a, b, c));

	return 0;
}