#include <stdio.h>
#include <string.h>
char* str_chr(char* s, int c)
{
	char* t = NULL;
	while (*s) {
		if (*s == c) {
			t = s;
			break;
		} s++;
	}
	return t;
}
int main()
{
	char str[128];
	int c = 'c';

	printf("�������ַ�����");
	scanf_s("%s", str, 32);

	printf("Ŀ���ַΪ%p\n", str_chr(str, c));

	return 0;
}