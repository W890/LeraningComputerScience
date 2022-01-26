#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int no;

	printf("ÕýÕûÊý£º");
	scanf("%d", &no);

	while (no-- > 0) {
		putchar('*');
		putchar('\n');
	}
	return 0;
}
