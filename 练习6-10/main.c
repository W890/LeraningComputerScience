#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define	NUMBER	5

void intary_rcpy(int v1[], const int v2[], int n)
{
	int i;

	for (i = 0; i < n; i++) {
		v1[i] = v2[n - 1 - i];
	}
	for (i = 0; i < n; i++) {
		printf("v1[%d] = %d\n", i, v1[i]);
	}
}
int main()
{
	int i;
	int v1[NUMBER];
	int v2[NUMBER];

	puts("请输入数组元素：");

	for (i = 0; i < NUMBER; i++) {
		printf("v2[%d]:", i);
		scanf("%d", &v2[i]);
	}
	puts("倒序排序到v1");
	intary_rcpy(v1, v2, NUMBER);
	return (0);
}
