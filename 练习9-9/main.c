#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> 
void rev_swap(char* a, char* b)
{
    char c = *a;
    *a = *b;
    *b = c;
}

void rev_string(char s[], int len) {
    for (int i = 0; i < len / 2; i++) {
        rev_swap(&s[i], &s[len - i - 1]);
    }
}

int main()
{
    char s[128] = "SEC";
    int i;
    printf("ÇëÊäÈë×Ö·û´®: ");
    for (i = 0; i < 3; i++) {
        printf("s[%d]:", i);
        scanf("%s", &s[i]);
    }
    rev_string(s, strlen(s));
    printf("¸üÐÂºóµÄ×Ö·û´®: %s", s);

    return 0;
}