#include <stdio.h>
int str_length(const char* s)
{
	int len = 0;
	while (*s++)
		len++;
	return 0;
}
int main()
{
	char str[128];
	printf("�������ַ�����");
	scanf("%s", str);
	printf("zifuc\"%s\"�ĳ�����%d��\n", str, str_length(str));

	return 0;
}