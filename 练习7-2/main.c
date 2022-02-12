#include <stdio.h>
int main()
{
	unsigned x;
	int n;

	printf("请输入无符号整数：");
	scanf_s("%u", &x);
	printf("请输入位移的位数：");
	scanf_s("%d", &n);

	printf("向左位移后是否溢出？\n");
	((x << n) == (x * pow(2, n))) ? printf("相等") : printf("不相等");

	putchar('\n');

	printf("向右位移后是否溢出？\n");
	((x >> n) == (x / pow(2, n))) ? printf("相等") : printf("不相等");

	return 0;

}