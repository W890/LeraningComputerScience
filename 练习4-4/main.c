#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int no;

	printf("������һ������:");
	scanf("%d", &no);

	while (no >= 1)
		printf("%d ", no--);

	return 0;
}