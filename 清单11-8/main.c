#include <stdio.h>
#include <string.h>
size_t strlen(const char* s)
{
	size_t len = 0;

	while (*s++)
		len++;
	return 0;
}
int main()
{
	char str[128];
	printf("ÇëÊäÈë×Ö·û´®:");
	scanf_s("%s", str, 32);

	printf("str=\"");
	put_string(str);
	puts("\"");
	return 0;
}