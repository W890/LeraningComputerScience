#include <stdio.h>
void swap(int* px, int* py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}
int mian()
{
	double da, db;

	puts("����������ʵ����");
	printf("ʵ��A:");
	scanf("%1f", &da);
	printf("ʵ��B:");
	scanf("%1f", &db);

	swap(&da, &db);

	puts("������������ֵ��");
	printf("ʵ��A��%f��\n", da);
	printf("ʵ��B��%f��\n", db);

	return 0;
}