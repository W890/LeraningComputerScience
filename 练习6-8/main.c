#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int min_of(const int v[], int n)
{
	int min;
	int i;
	min = v[0];
	for (i = 1; i < n; i++) {
		if (v[i] < min)
			min = v[i];
	}
	return min;
}
int main(void)
{
	int min;
	int v[4] = { 19,63,34,76 };
	min = min_of(v, 4);
	printf("min = %d\n", min);
	return 0;
}