#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>
#define NUMBER 2
void rev_swap(char* a, char* b)
{
    char c = *a;
    *a = *b;
    *b = c;
}
void rev_str(char s[], int len)
{
    for (int i = 0; i < len / 2; i++) {
        rev_swap(&s[i], &s[len - i - 1]);
    }
}

int min(int a, int b)
{
    return (a < b ? a : b);
}
void rev_string(char s[][128], int sn, int n)
{
    for (int i = 0; i < sn; i++) {
        rev_str(s[i], min(n, strlen(s[i])));
    }
}

int main()
{
    int i;
    char str[NUMBER][128] = { "CES", "CBA"};

    rev_string(str, NUMBER, 4);
    printf("以下为经过变换后的字符串。\n");
    for (i = 0; i < NUMBER; i++) {
        printf("s[%d] = \"%s\"\n", i, str[i]);
    }

    return 0;
}