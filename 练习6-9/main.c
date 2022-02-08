#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUM 4
void rev_intary(int v[], int n)
{
	int tmp;
	int i;
	for (i = 0; i < n / 2; i++) {
		tmp = v[i];
		v[i] = v[n - 1 - i];
		v[n - 1 - i] = tmp;
	}
	return;
}
int main(void)
{
	int i;
	int v[NUM] = { 19,63,34,76 };
	rev_intary(v, NUM);
	for (i = 0; i < NUM; i++) {
		printf("v[%d] = %d\n", i, v[i]);
	}
	return 0;
}