#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, no;

	printf("������һ����������");
	scanf("%d", &no);

	for (i = 0; i <= no; i++)
		printf("%d", i);
	putchar('\n');

	return 0;
}