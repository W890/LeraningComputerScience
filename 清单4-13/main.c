#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0;
	int sum = 0;
	int num, tmp;

	printf("������ٸ�������");
	scanf("%d", &num);

	for (i = 0; i < num; i++) {
		printf("NO.%d:", i + 1);
		scanf("%d", &tmp);
		sum += tmp;
	}
	printf("�ϼ�ֵ��%d\n", sum);
	printf("ƽ��ֵ��%.2f\n", (double)sum / num);

	return 0;
}