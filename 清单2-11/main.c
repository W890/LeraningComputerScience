#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c;
	int sum;
	int ave;

	puts("����������������");
	printf("����a:"); scanf("%d", &a);
	printf("����b:"); scanf("%d", &b);
	printf("����c:"); scanf("%d", &c);

	sum= a + b + c;
	ave = (double)sum / 3;

	printf("���ǵĺϼ�ֵ��%5d�� \n", sum);
	printf("���ǵ�ƽ��ֵ��%5.1f�� \n", ave);

	return 0;
}