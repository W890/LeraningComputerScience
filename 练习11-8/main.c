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

	printf("去掉数字后，字符串变为:");
	del_digit(str);

	return 0;
}