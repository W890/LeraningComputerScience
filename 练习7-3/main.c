#include <stdio.h>
unsigned rrotate(unsigned x, int n)
{
	return x >> n;
}
unsigned lrotate(unsigned x, int  n)
{
	return x << n;
}
int main(void)
{
	unsigned x;
	int n;

	printf("�������޷���������");   
	scanf_s("%u", &x);
	printf("�������ƶ�λ����");    
	scanf_s("%d", &n);

	printf("�޷�����%u����%dλ���%u\n", x, n, lrotate(x, n));
	printf("�޷�����%u����%dλ���%u\n", x, n, rrotate(x, n));

	return 0;
}