#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, n;

	printf("����ֵ��");
	scanf("%d", &n);

	for (i = 1; i <= n; i += 2) {
		printf("%d ", i);
	}
	return 0;
}