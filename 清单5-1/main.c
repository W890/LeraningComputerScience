#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int uchida;
	int satoh;
	int sanaka;
	int hiraki;
	int masaki;
	int sum = 0;

	printf("������5��ѧ���ķ�����\n");
	printf("1��:");
	sancf("%d", &uchida);
	sum += uchida;
	printf("2��:");
	scanf("%d", &satoh);
	sum += satoh;
	printf("3��:");
	scanf("%d", &sanaka);
	sum += sanaka;
	printf("4�ţ�");
	scanf("%d", &hiraki);
	sum += hiraki;
	printf("5��:");
	scanf("%d", &masaki);
	sum += masaki;

	printf("�ܷ֣�%5d\n", sum);
	printf("ƽ���֣�%5.1f\n", (double)sum / 5);

	return 0;66
}