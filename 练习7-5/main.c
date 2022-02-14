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
	printf("请输入无符号整数x：");
	scanf_s("%u", &x);
	printf("请输入操作位置：");
	scanf_s("%d", &pos);
	printf("请输入操作位数：");
	scanf_s("%d", &n);

	printf("无符号整数%u从第%d位到第%d位设为1，变成%u\n", x, pos,pos + n - 1, set_n(x, pos, n));
	printf("无符号整数%u从第%d位到第%d位设为0，变成%u\n", x, pos,pos + n - 1, reset_n(x, pos, n));
	printf("无符号整数%u从第%d位到第%d位设为取反，变成%u\n", x, pos,pos + n - 1, inverse_n(x, pos, n));

	return 0;
}