#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define NUMBER 30
int main()
{
    int i;
    char s[NUMBER][128];
    int cnt = 0;
    for (i = 0; i < NUMBER; i++) {
        printf("s[%d]:", i);
        scanf("%s", s[i]);
        if (strcmp(s[i], "$$$$$") == 0)
            break;
        cnt++;
    }
    for (i = 0; i < cnt; i++) {
        if (strcmp(s[i], "$$$$$") != 0) {
            printf("s[%d] = \"%s\"\n", i, s[i]);
        }
    }
    return 0;
}