#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int no, i,a;

	printf("请输入一个正整数：");
	scanf("%d", &no);

	i = 0;
	a = no;

	while (no > 0) {
		no /= 10;
		i++;
	}
	printf("%d的位数是%d:", a,i);

	return 0;
}