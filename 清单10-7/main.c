#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void swap(int* px, int* py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}
void sort2(int* n1, int* n2)
{
	if (*n1 > *n2)
		swap(n1, n2);
}
int main()
{
	int na, nb;

	puts("����������������");
	printf("����A��");
	scanf("%d", &na);
	printf("����B��");
	scanf("%d", &nb);

	sort2(&na,  nb);

	puts("��������ֵ����������");
	printf("����A��%d��\n", na);
	printf("����B��%d��\n", nb);

	return 0;;
}
