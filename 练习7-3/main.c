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

	printf("请输入无符号整数：");   
	scanf_s("%u", &x);
	printf("请输入移动位数：");    
	scanf_s("%d", &n);

	printf("无符号数%u左移%d位变成%u\n", x, n, lrotate(x, n));
	printf("无符号数%u右移%d位变成%u\n", x, n, rrotate(x, n));

	return 0;
}