#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, no;

	printf("ÕıÕûÊı£º");
	scanf("%d", &no);

	for (i = 1; i <= no; i++)
		putchar('*');
	putchar('\n');

	return 0;
}