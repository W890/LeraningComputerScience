#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int no;

	do {
		printf("请输入一个正整数：");
		scanf("%d", &no);
		if (no <= 0)
			puts("\a请不要输入非正整数。");
	} while (no <= 0);
	
	printf("该整数逆向显示的结果是：");
	while (no > 0) {
		printf("%d", no % 10);
		no /= 10;
	}
	puts("。");

	return 0;
}