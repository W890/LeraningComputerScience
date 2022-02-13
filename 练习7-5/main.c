#include <stdio.h>
unsigned set_n(unsigned x, int pos, int n)
{
	unsigned j = 1;
	for (int i = 1; i < n; i++) {
		j <<= 1;
		j |= 1;
	}
	j <<= pos;
	
	return j | x;
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
	return j & x;
}
unsigned inverse_n(unsigned x, int pos, int n)
{
	unsigned j = 1;
	int number;
	for (int i = 1; i < n; i++) {
		j <<= 1;
		j |= 1;
	}
	j <<= pos;
	void print_binary(unsigned int number);
	{
		if (number >> 1) {
			print_binary(number >> 1);
		}
		putc((number & 1) ? '1' : '0', stdout);
	}
	return j ^ x;
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