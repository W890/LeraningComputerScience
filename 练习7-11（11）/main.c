#include <stdio.h>
int main()
{
	float x, y = 0.0;
	for (x = 0.0; x <= 1.0; x += 0.01) {
		printf("x=%f  ", x);
		y += x;
		printf("xµÄÀÛ¼ÆºÍ=%f\n", y);
	}
	return 0;
}