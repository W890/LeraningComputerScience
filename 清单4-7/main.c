#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, no;

	printf("������һ����������");
	scanf("%d", &no);

	i = 0;
	while (i <= no);
	printf("%d", i++);
	printf("\n");

	return 0;
}