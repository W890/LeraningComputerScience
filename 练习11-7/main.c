#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

void str_toupper(char* s)
{
	while (*s) {
		*s = toupper(*s);
		*s++;
	}
}

void str_tolower(char* s)
{
	while (*s) {
		*s = tolower(*s);
		*s++;
	}
}

int main()
{
	char s[128];
	printf("请输入字符串：");
	scanf("%s", s, 32);

	str_toupper(s);
	printf("将字符串中的字母改为大写:%s\n", s);
	str_tolower(s);
	printf("将字符串中的字母改为小写:%s\n", s);

	return 0;
}