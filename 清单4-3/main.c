#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int sum = 0;
	int cnt = 0;
	int retry;

	do {
		int t;

		printf("请输入一个整数：");
		scanf("%d", &t);
		sum = sum + t;
		cnt = cnt + 1;

		printf("是否继续？ <yes...0/no...9>");
		scanf("%d", &retry);
	} while (retry == 0);

	printf("和为%d,平均值为%.2f。 \n", sum, (double)sum / cnt);

	return 0;
}