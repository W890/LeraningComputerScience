#include <stdio.h>
#include <limits.h>
int main()
{
	printf("这个编译器中的char型是");

	if (CHAR_MIN)
		puts("有符号的。");
	else
		puts("无符号的。");

	return 0;
}