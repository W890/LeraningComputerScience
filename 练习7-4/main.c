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

	printf("请输入无符号整数x：");  
	scanf_s("%u", &x);
	printf("请输入操作位数：");   
	scanf_s("%d", &n);

	printf("无符号整数%u第%d位设为1，变成%u\n", x, n, set(x, n));
	printf("无符号整数%u第%d位设为0，变成%u\n", x, n, reset(x, n));
	printf("无符号整数%u第%d位设为取反，变成%u\n", x, n, inverse(x, n));

	return 0;

}