#include <stdio.h>
int main()
{
	int i;
	float x, y = 0;

	for (i = 0; i <= 100; i++) {
		printf("x=%f   ", i / 100.0);
		printf("xµÄÀÛ¼ÆºÍ=%f\n", y += i / 100.0);
	}
	return 0;
}