#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char* str_copy(char *d, const char *s)
{
	char *t = d;
	while (*d++ = *s++)
		;
	return t;
}
int main()
{
	char str[128] = "ABC";
	char tmp[128];

	printf("str = \"%s\"\n", str);

	printf("���Ƶ��ǣ�", tmp);
	scanf("%s", tmp);

	str_copy(str, tmp);

	puts("�����ˡ�");
	printf("str =\"%s\"\n", str);

	return 0;
}