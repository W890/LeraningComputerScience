#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i;
	int tensu[5];
	int sum = 0;

	printf("������5��ѧ���ķ�����\n");
	for (i = 0; i < 5; i++) {
		printf("%2d��:", i + 1);
		scanf("%d", &tensu[i]);
		sum += tensu[i];
	}
	printf("�ܷ�:%5d\n", sum);
	printf("ƽ����:%5.1f\n", (double)sum / 5);

	return 0;
}