#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int fx;
int main()
{
	int i;
	static int     si;
	static double  sd;
	static int     sa[5];

	printf("fx = %d\n", fx);
	printf("si = %d\n", si);
	printf("sd = %d\n", sd);

	for (i = 0; i < 5; i++)
		printf("sa[%d] = %d\n", i, sa[i]);

	return 0;
}