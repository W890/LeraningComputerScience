#include <stdio.h>
#include <limits.h>

int main()
{
	unsigned x, y;
	x = UINT_MAX;
	y = 0;

	printf("x=%u\n", x);
	printf("x+1=%u\n", x + 1);

	printf("y=%u\n", y);
	printf("y-1=%u\n", y - 1);

	return 0;
}