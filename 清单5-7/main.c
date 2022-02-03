#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i;
	int x[5];
	
	for (i = 0; i < 5; i++) {
		printf("x[%d]:", i);
		scanf("%d", &x[i]);
	}
	for (i = 0; i < 5; i++)
		printf("x[%d]=%d\n", i, x[i]);

	return 0;
}