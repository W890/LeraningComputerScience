#include <stdio.h>
#include <string.h>
int str_chnum(const char* s, int c)
{
	int len, num = 0;

	for (len = 0; len < strlen(s); len++) {
		if (*(s + len) == 'c')
			num++;
	}
	return num;
}
int main()
{
	char str[128];
	char c = 'c';

	printf("�������ַ�����");
	scanf_s("%s", str, 32);

	printf("�ַ�������%d��c��\n", str_chnum(str, c));

	return 0;
}