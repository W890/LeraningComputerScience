#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define NUMBER 3
void rev_string(char s[][128], int n)
{
    int i, j, k;
    for (i = 0; i < n; i++) {
        j = 0;
        while (s[i][j]) {
            j++;
        }
        for (k = 0; k < j / 2; k++) {
            int temp;
            temp = s[i][k];
            s[i][k] = s[i][j - k - 1];
            s[i][j - k - 1] = temp;
        }
    }
}
int main()
{
    int i;
    char str[NUMBER][128];
    printf("请输入%d组字符串。\n", NUMBER);
    for (i = 0; i < NUMBER; i++) {
        printf("s[%d] = ", i);
        scanf("%s", str[i]);
    }
    printf("以下为经过变换后的字符串。\n");
    rev_string(str, NUMBER);
    for (i = 0; i < NUMBER; i++) {
        printf("s[%d] = \"%s\"\n", i, str[i]);
    }

    return 0;
}