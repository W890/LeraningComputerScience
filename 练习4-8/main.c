#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int no;

	printf("��������");
	scanf("%d", &no);

	while (no-- > 0)
		putchar('*');

	return 0;
}