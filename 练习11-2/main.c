#include <stdio.h>
int main()
{
	int i, j;
	char a[][5] = { "ABCD","E","EGH" };
	char* p[] = { "PAUL","X","MAC" };

	i = sizeof(a) / sizeof(a[0]);
	j = sizeof(p) / sizeof(p[0]);

	printf("a中字符串个数为%d\n", i);
	printf("b中字符串个数为%d\n", j);

	return 0;

}