#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, begin, finish, gap;

	printf("开始数值 （cm）：");
	scanf("%d", &begin);
	printf("结束数值 （cm）：");
	scanf("%d", &finish);
	printf("间隔数值 （cm）: ");
	scanf("%d", &gap);


	for (i = 0; i <= (finish - begin) / gap; i++) {
		printf("%dcm     %.2fkg\n", begin, (begin - 100) * 0.9);
		begin += gap;
	}
	return 0;

}