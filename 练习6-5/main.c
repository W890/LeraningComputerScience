#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sumup(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	return sum;
}
int main(void)
{
	int n;
	printf("����n��");
	scanf("%d", &n);
	printf("1��%d֮�����������ĺ���%d��\n", n, sumup(n));
	return 0;
}