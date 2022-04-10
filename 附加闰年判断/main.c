#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
void is_leap_year(int year)
{

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	printf("%d是闰年。\n", year);
	else
	printf("%d是平年。\n", year);
}
int main()
{
	int y = 0;

	printf("输⼊你要查的年份：");
	scanf("%d", &y);

	is_leap_year(y);

	system("pause");

	return 0;
}