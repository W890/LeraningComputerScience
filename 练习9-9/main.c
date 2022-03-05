#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void rev_string(char s[]) {
    int i;
    int j;
    j = strlen(s) - 1;
    char temp[128];
    for (i = 0; i <= j; i++) {
        temp[i] = s[j - i];
    }
    for (i = 0; i <= j; i++) {
        s[i] = temp[i];
    }

}
int main()
{
    char ch[128];
    int i;
    printf("ÇëÊäÈë×Ö·û´®: ");
    scanf("%s", ch);
    rev_string(ch);
    printf("¸üÐÂºóµÄ×Ö·û´®: %s", ch);

    return 0;
}