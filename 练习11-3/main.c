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

	printf("���Ƶ���:");
	scanf_s("%s", tmp, 32);

	puts("���ƺ�");
	printf("str=\"%s\"\n", str_copy(str, tmp));

	return 0;
}