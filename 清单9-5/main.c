#include <stdio.h>
int main()
{
	char str[] = "12345";

	printf("%S\n", str);
	printf("%3S\n", str);
	printf("%.3S\n", str);
	printf("%8S\n", str);
	printf("%-8S\n", str);

	return 0;
}