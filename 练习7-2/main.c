#include <stdio.h>
int main()
{
	unsigned x;
	int n;

	printf("�������޷���������");
	scanf_s("%u", &x);
	printf("������λ�Ƶ�λ����");
	scanf_s("%d", &n);

	printf("����λ�ƺ��Ƿ������\n");
	((x << n) == (x * pow(2, n))) ? printf("���") : printf("�����");

	putchar('\n');

	printf("����λ�ƺ��Ƿ������\n");
	((x >> n) == (x / pow(2, n))) ? printf("���") : printf("�����");

	return 0;

}