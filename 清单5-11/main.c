#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUMBER 5
int main()
{
	int i;
	int tensu[NUMBER];
	int max, min;

	printf("������%d��ѧ���ķ�����\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("%2d��:", i + 1);
		scanf("%d", &tensu[i]);
	}
	min = max = tensu[0];
	
	for (i = 1; i < NUMBER; i++) {
		if (tensu[i] > max)
			max = tensu[i];
		if (tensu[i] < min)
			min = tensu[i];
	}
	printf("��߷֣�%d\n", max);
	printf("��ͷ�: %d\n", min);

	return 0;
}