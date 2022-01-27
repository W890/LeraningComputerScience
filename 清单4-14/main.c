#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, n;

	printf("ÕûÊıÖµ£º");
	scanf("%d", &n);

	for (i = 2; i <= n; i += 2) 
		printf("%d", i);
	putchar('\n');

	return 0;
}