#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUMBER 80
int main()
{
	int i, j;
	int num;
	int tensu[NUMBER];

	printf("���ݸ�����");
	scanf("%d", &num);
	
	for (i = 0; i < num; i++) {
		printf("%d��:", i + 1);
		scanf("%d", &tensu[i]);
	}
	printf("{");
	for (i = 0; i < num - 1; i++) {
		printf("%d, ", tensu[i]);
	}
	printf("%d", tensu[num - 1]);
	printf("}");

	return 0;
}