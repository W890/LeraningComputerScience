#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int sum = 0;
	int cnt = 0;
	int retry;

	do {
		int t;

		printf("������һ��������");
		scanf("%d", &t);
		sum = sum + t;
		cnt = cnt + 1;

		printf("�Ƿ������ <yes...0/no...9>");
		scanf("%d", &retry);
	} while (retry == 0);

	printf("��Ϊ%d,ƽ��ֵΪ%.2f�� \n", sum, (double)sum / cnt);

	return 0;
}