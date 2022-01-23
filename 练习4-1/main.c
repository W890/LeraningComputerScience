#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int retry=0;

	do {
		int no;

		printf("请输入一个整数:");
		scanf("%d", &no);

		if (no == 0)
			puts("该整数为0.");
		else if (no > 0)
			puts("该整数为正数。");
		else
			puts("该整数为负数。");

		printf("要重复一次吗？[yes...1/no...0]:");
		scanf("%d", &retry);
	} while (retry == 1);

	return 0;
}