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
	printf("�������ַ�����");
	scanf("%s", s, 32);

	str_toupper(s);
	printf("���ַ����е���ĸ��Ϊ��д:%s\n", s);
	str_tolower(s);
	printf("���ַ����е���ĸ��ΪСд:%s\n", s);

	return 0;
}