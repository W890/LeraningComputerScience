#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int str_length(const char s[])
{
	int len = 0;
	while (s[len])
		len++;
	return len;
}
int main()
{
	char str[128];

	printf("�������ַ�����");
	scanf("%s", str);

	printf("�ַ���\"%s\"�ĳ�����%d��\n", str, str_length(str));

	return 0;
}