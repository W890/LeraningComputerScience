#include <stdio.h>
unsigned set(unsigned x, int pos)
{
	int i = 1;
	return x | (i << pos);
}
unsigned reset(unsigned x, int pos)
{
	int i = 1;
	return x & ~(i << pos);
}
unsigned inverse(unsigned x, int pos)
{
	int i = 1;
	return x ^ (i << pos);
}
int main()
{
	unsigned x;
	int n;

	printf("�������޷�������x��");  
	scanf_s("%u", &x);
	printf("���������λ����");   
	scanf_s("%d", &n);

	printf("�޷�������%u��%dλ��Ϊ1�����%u\n", x, n, set(x, n));
	printf("�޷�������%u��%dλ��Ϊ0�����%u\n", x, n, reset(x, n));
	printf("�޷�������%u��%dλ��Ϊȡ�������%u\n", x, n, inverse(x, n));

	return 0;

}