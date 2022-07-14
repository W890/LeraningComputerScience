#include <stdio.h>
#include <string.h>
void put_string(const char* s)
{	
	while (*s)
		printf("%c", *s++);
	return 0;
	
}
int main()
{
	char str[128];
	printf("ÇëÊäÈë×Ö·û´®:");
	scanf_s("%s", str, 32);

	printf("str=%c", str);
	put_string(str);
	puts("\"");
	return 0;
}