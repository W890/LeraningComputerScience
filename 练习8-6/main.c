#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num;
	int i;
	int factorial = 1;

	printf("������һ������:");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++) {
		factorial *= i;
	}
	printf("����%d�Ľ׳�Ϊ%d\n", num, factorial);

	return 0;
}