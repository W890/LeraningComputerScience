#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int retry;

	do {
		int a, b,c;

		printf("����������������\n");
		printf("����a:");
		scanf("%d", &a);
		printf("����b:");
		scanf("%d", &b);

		printf("���ǵĺ���%d��", c = a + b);

		printf("�Ƿ������[yes...1/no...0]:");
		scanf("%d", &retry);
	} while (retry == 1);
	return 0;
}