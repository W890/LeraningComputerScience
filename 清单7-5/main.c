#include <stdio.h>
int main()
{
	int vi[10];
	double vd[25];

	printf("����vi��Ԫ�ظ��� = %u\n", (unsigned)(sizeof(vi) / sizeof(vi[0])));
	printf("����vd��Ԫ�ظ��� = %u\n", (unsigned)(sizeof(vd) / sizeof(vd[0])));

	return 0;
}