#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count_bits(unsigned x)
{
	int bits = 0;
	while (x) {
		if (x & 1U)    bits++;
		x >>= 1;
	}

	return (bits);
}

int int_bits(void)
{
	return count_bits(~0U);
}

void print_bits(unsigned x)
{
	int i;

	for (i = int_bits() - 1; i >= 0; i--) {
		unsigned xx = x >> i;
		unsigned yy = xx & 1;
		putchar(yy ? '1' : '0');
	}
	putchar('\n');
}

unsigned set_n(unsigned x, int pos, int n)
{
	unsigned j = 1;
	print_bits(j);
	for (int i = 1; i < n; i++) {
		j <<= 1;
		print_bits(j);
		j |= 1;
		print_bits(j);
	}
	j <<= pos;
	print_bits(j);
	
	unsigned int y =  j | x;
	print_bits(y);
	return y;
}
unsigned reset_n(unsigned x, int pos, int n)
{
	unsigned j = 1;
	for (int i = 1; i < n; i++) {
		j <<= 1;
		j |= 1;
	}
	j <<= pos;
	j =~j;
	unsigned y = & x;
	print_bits(y);
	return y;
}
unsigned inverse_n(unsigned x, int pos, int n)
{
	unsigned j = 1;
	for (int i = 1; i < n; i++) {
		j <<= 1;
		j |= 1;
	}
	j <<= pos;
	print_bits(x);
	print_bits(j);
	unsigned y = j ^ x;
	print_bits(y);
	return y;


}

int main()
{
	unsigned x;
	int  n;
	int pos;
	printf("�������޷�������x��");
	scanf_s("%u", &x);
	printf("���������λ�ã�");
	scanf_s("%d", &pos);
	printf("���������λ����");
	scanf_s("%d", &n);

	printf("�޷�������%u�ӵ�%dλ����%dλ��Ϊ1�����%u\n", x, pos,pos + n - 1, set_n(x, pos, n));
	printf("�޷�������%u�ӵ�%dλ����%dλ��Ϊ0�����%u\n", x, pos,pos + n - 1, reset_n(x, pos, n));
	printf("�޷�������%u�ӵ�%dλ����%dλ��Ϊȡ�������%u\n", x, pos,pos + n - 1, inverse_n(x, pos, n));

	return 0;
}