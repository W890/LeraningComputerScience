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
    printf("�������ַ���: ");
    scanf("%s", ch);
    i = str_char(ch, 'c');
    if ('c')
    printf("�ַ�c���±�ֵΪ%d", i);
    else 
    printf("-1");

    return 0;
}