#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int no;

	printf("������һ����������");
	scanf("%d", &no);

	while (no >= 0)
		printf("%d", no--);

	printf("\n");

	return 0;
}