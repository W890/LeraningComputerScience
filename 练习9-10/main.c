#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void del_digit(char s[]) {
    char temp[128];
    for (int i = 0; i <= (strlen(s) - 1); i++) {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
            temp[i] = s[i];
        } else {
            continue;
        }
        putchar(temp[i]);
    }
}
int main()
{
    char ch[128];
    printf("ÇëÊäÈë×Ö·û´®: ");
    scanf("%s", ch);
    printf("¸üÐÂºÃµÄ×Ö·û´®");
    del_digit(ch);

    return 0;
}