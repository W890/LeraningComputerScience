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

	printf("���Ƶ��ǣ�", tmp);
	scanf("%s", tmp);

	str_copy(ptr, tmp);

	puts("�����ˡ�");
	printf("ptr = \"%s\"\n", ptr);

	return 0;
}