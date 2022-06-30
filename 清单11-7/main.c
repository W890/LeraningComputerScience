#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char* str_copy(char* d, const char* s)
{
	char* t = d;
	while (*d++ = *s++)
		;
	return 0;
}
int main()
{
	char* ptr = *"1234";
	char tmp[128];

	printf("ptr = \"%s\"\n", ptr);

	printf("复制的是：", tmp);
	scanf("%s", tmp);

	str_copy(ptr, tmp);

	puts("复制了。");
	printf("ptr = \"%s\"\n", ptr);

	return 0;
}