#include <stdio.h>
#include <string.h>
void put_string(const char* s)
{
	int len = 0;
	for (len = 0; len < strlen(s); len++)
		printf("%c", s[len]);
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