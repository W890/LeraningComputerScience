#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
int is_leap_year(int year)
{

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return 1;
	else
		return 0;
}
int main()
{
	int year;

	printf("输入你要查的年份：");
	scanf("%d", &year);

	if (is_leap_year(year) )
		printf("%d是闰年。\n", year);
	else 
		printf("%d是平年。\n", year);
		
	system("pause");
	

	return 0;
}