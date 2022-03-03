#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int str_char(const char s[], int c) {
    int i;
    for (i = 0; i < strlen(s); i++) 
        if (s[i] == 'c') 
    
    return i;
}
int main()
{
    char ch[128];
    int i;
    printf("请输入字符串: ");
    scanf("%s", ch);
    i = str_char(ch, 'c');
    if ('c')
    printf("字符c的下标值为%d", i);
    else 
    printf("-1");

    return 0;
}