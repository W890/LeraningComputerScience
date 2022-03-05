#define _CRT_SECURE_NO_WARNINGS
#include <ctype.h>
#include <stdio.h>
void str_toupper(char s[])
{
	int i = 0;
	while (s[i]) {
		s[i] = toupper(s[i]);
		i++;
	}
}
void str_tolower(char s[])
{
	int i = 0;
	while (s[i]) {
		s[i] = tolower(s[i]);
		i++;
	}
}
int main()
{
	char str[128];

	printf("ÇëÊäÈë×Ö·û´®£º");
	scanf("%s", str);

	str_toupper(str);
	printf("´óĞ´×ÖÄ¸£º%s\n", str);

	str_tolower(str);
	printf("Ğ¡Ğ´×ÖÄ¸£º%s\n", str);

	return 0;

}