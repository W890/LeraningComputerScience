#define _CRT_SECURE_NO_WARNINGS
#include  <stdio.h>
void put_string(const char s[])
{
	int i = 0;
	while (s[i])
		putchar(s[i++]);
}
int main()
{
	char str[128];
	printf("�������ַ�����");
	scanf("%s", str);

	printf("��������");
	put_string(str);
	printf("��\n");

	return 0;
}