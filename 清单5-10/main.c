#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUMBER 5

int main()
{
	int i;
	int tensu[NUMBER];
	int sum = 0;

	printf("������%d��ѧ���ķ�����\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("%2d��:", i + 1);
		scanf("%d", &tensu[i]);
		sum += tensu[i];
	}
	printf("�ܷ֣�%5d\n", sum);
	printf("ƽ���֣�%5.1f\n", (double)sum / NUMBER);

	return 0;
}