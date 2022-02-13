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