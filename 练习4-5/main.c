#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, no;

	printf("������һ����������");
	scanf("%d", &no);

	i = 1;
	while (i <= no)
		printf("%d ", i++);

	return 0;
}