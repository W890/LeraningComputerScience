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

	printf("请输入字符串：");
	scanf_s("%s", str, 32);

	printf("目标地址为%p\n", str_chr(str, c));

	return 0;
}