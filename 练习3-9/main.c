#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n1, n2, n3, min;

	printf("����1��");
	scanf("%d", &n1);
	printf("����2��");
	scanf("%d", &n2);
	printf("����3��");
	scanf("%d", &n3);

	min = (n1 < n2) ? n1 : n2;
	min = (min < n3) ? min : n3;

	printf("���ǵ���Сֵ�ǣ�%d\n", min);
	

	return 0;
}