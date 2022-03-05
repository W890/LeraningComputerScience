#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void put_stringr(const char s[]) {
    int j;
    j = strlen(s) - 1;
    for (int i = 0; i < strlen(s); i++) {
        putchar(s[j - i]);
    }
}
int main()
{
    char ch[128];
    int i;
    printf("ÇëÊäÈë×Ö·û´®: ");
    scanf("%s", ch);
    put_stringr(ch);

    return 0;
}