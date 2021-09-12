#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("[%d]\n", 123);
	printf("[%.4d]\n", 123);
	printf("[%4d]\n", 123);
	printf("[%0.4d]\n", 123);
	printf("[%-4d]\n\n", 123);

	printf("[%d]\n", 12345);
	printf("[%.3d]\n", 12345);
	printf("[%3d]\n", 12345);
	printf("[%0.3d]\n", 12345);
	printf("[%-3d]\n\n", 12345);

	printf("[%f]\n", 123.13);
	printf("[%.1f]\n", 123.13);
	printf("[%6.1f]\n\n", 123.13);

	printf("[%f]\n", 123.13);
	printf("[%.1f]\n", 123.13);
	printf("[%4.1f]\n\n", 123.13);

	return 0;
}