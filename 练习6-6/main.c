#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void alert(int n)
{
	int i;
	for (i = 0; i < n; i++) {
		printf("\a");
	}
	return;
}
int main(void)
{
	int n;
	printf("整数n：");
	scanf("%d", &n);
	printf("连续发出%d次响铃。\n", n);
	alert(n);
	return 0;
}