#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int str_chnum(const char s[], int c) {
    int i;
    int cnt = 0;
    for (i = 0; i < strlen(s); i++) {
        if (s[i] == 'c') {
            cnt++;
        }
    }
    return cnt;
}
int main()
{
    char ch[128];
    int i;
    printf("�������ַ���: ");
    scanf("%s", ch);
    i = str_chnum(ch, 'c');
    printf("�ַ���S���ַ�c�ĸ���Ϊ%d", i);

    return 0;
}