#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int mian()
{
	int sw;

	printf("ÕûÊı£º");
	scanf("%d", &sw);

	switch (sw) {
	case 1: puts("A");  puts("B");  break;
	case 2: puts("C"); 
	case 5: puts("D");  break;
	case 6: 
	case 7: puts("E"); break;
	default: puts("F"); break;
	}

	return 0;
}