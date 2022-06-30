#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char* str_copy(char* d, const char* s)
{
	char* t = d;

	while (*d++ = *s++)
		;
	return t;
}
int main()
{
	char str[128] = "ABC";
	char tmp[128];

	printf("str=\"%s\"\n", str);

	printf("复制的是:");
	scanf_s("%s", tmp, 32);

	puts("复制后。");
	printf("str=\"%s\"\n", str_copy(str, tmp));

	return 0;
}