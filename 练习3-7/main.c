#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n1, n2, n3, n4, max;

	printf("����һ��");
	scanf("%d", &n1);
	printf("��������");
	scanf("%d", &n2);
	printf("��������");
	scanf("%d", &n3);
	printf("�����ģ�");
	scanf("%d", &n4);

	n1 = max;
	if (n2 > max) n2 = max;
	if (n3 > max) n3 = max;
	if (n4 > max) n4 = max;

	printf("���ĸ�����������%d��\n", max);

	return 0;
}