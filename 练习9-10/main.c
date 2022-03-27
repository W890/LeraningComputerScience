#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> 
int is_alpha(int c)
{
	return ('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z');
}
void del_digit(char s[]) {
	char temp[128];
	int j = 0;
	for (int i = 0; i <= (strlen(s) - 1); i++) {
		if (is_alpha(s[i])) {
			temp[j++] = s[i];
		}
	}
	temp[j] = 0; 
	strcpy(s, temp);
}
int main()
{
	char str[128] = "abc123cba";
	printf("ÇëÊäÈë×Ö·û´®: ");
	scanf("%s", str);
	del_digit(str);
	printf("¸üÐÂºÃµÄ×Ö·û´®:\n%s\n", str);

	return 0;
}
