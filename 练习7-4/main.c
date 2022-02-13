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
	int pos;

	printf("�������޷�������x��");  
	scanf_s("%u", &x);
	printf("���������λ�ã�");   
	scanf_s("%d", &pos);

	printf("�޷�������%u��%dλ��Ϊ1�����%u\n", x, pos, set(x, pos));
	printf("�޷�������%u��%dλ��Ϊ0�����%u\n", x, pos, reset(x, pos));
	printf("�޷�������%u��%dλ��Ϊȡ�������%u\n", x, pos, inverse(x, pos));

	return 0;

}