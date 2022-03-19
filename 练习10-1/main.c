#include <stdio.h>
void adjust_point(int* n) {
	if (*n < 0)		*n = 0;
	if (*n > 100)	*n = 100;
}
int main()
{
	int n;

	puts("请输入一个整数：");
	scanf("%d", &n);

	adjust_point(&n);

	printf("%d", n);

	return 0;
}