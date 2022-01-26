#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int no;

	printf("ÕıÕûÊı£º");
	scanf("%d", &no);

	int i;
	i = 0;

	while (i < no) {
		if (no % 2) 
			printf("+");
		else 
			printf("-");
		
		no--;
	}
	return 0;
}
