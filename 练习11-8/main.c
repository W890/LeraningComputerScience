#include <stdio.h>

void del_digit(char* str)
{
	while (*str) {
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')) {
			printf("%c", *str);
		}
		str++;
	}
}

int main()
{
	char str[128] = "AB1C9";

	printf("ȥ�����ֺ��ַ�����Ϊ:");
	del_digit(str);

	return 0;
}