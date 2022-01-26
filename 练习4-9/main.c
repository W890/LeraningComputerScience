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
		if (i % 2) 
			printf("-");
		else 
			printf("+");
		
		i++;
	}
	return 0;
}
