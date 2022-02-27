#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void null_string(char s[]) {
    s[0] = '\0';
}
int main()
{
    char ch[128];
    printf("ÇëÊäÈë×Ö·û´®: ");
    scanf("%s", ch);
    null_string(ch);
    printf("×Ö·û´®Îª\"%s\"\n", ch);

    return 0;
}