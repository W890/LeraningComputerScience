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

	puts("请输入两个实数。");
	printf("实数A:");
	scanf("%1f", &da);
	printf("实数B:");
	scanf("%1f", &db);

	swap(&da, &db);

	puts("互换了两数的值。");
	printf("实数A是%f。\n", da);
	printf("实数B是%f。\n", db);

	return 0;
}