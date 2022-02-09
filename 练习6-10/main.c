#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define	NUMBER	10

void intary_rcpy(int v1[], const int v2[], int n)
{
	int i, tmp;
	if (n % 2 == 0) {
		for (i = 0; i < n / 2; i++) {
			tmp = v1[i];
			v1[i] = v1[n - 1 - i];
			v1[n - 1 - i] = tmp;

		}
	} else {
		for (i = 0; i < (n - 1) / 2; i++) {
			tmp = v1[i];
			v1[i] = v1[n - 1 - i];
			v1[n - 1 - i] = tmp;
		}
	}
	return;
}
int main()
{
	int i, j;
	int v1[NUMBER];
	int v2[NUMBER];

	puts("请输入数组元素：");
	for (i = 0; i < NUMBER; i++) {
		printf("[%d] = ", i);	scanf("%d", &v1[i]);
	}
	intary_rcpy(v1, v2, NUMBER);

	printf("逆序表示为：\n");
	for (i = 0; i < NUMBER; i++) {
		printf("v[%d] = %d\n", i, v1[i]);
	}
	return (0);
}
