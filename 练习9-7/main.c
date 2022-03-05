#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void put_stringn(const char s[], int n)
{
    int cnt = 0;
    while (cnt < n) {
        int i = 0;
        while (s[i]) {
            putchar(s[i++]);
        }
        cnt++;
    }
}
int main()
{
    char s[128];
    int i;
    printf("ÇëÊäÈë×Ö·û´®: ");
    scanf("%s", s);
    printf("ÇëÊäÈë×Ö·û´®ÏÔÊ¾µÄ´ÎÊý: ");
    scanf("%d", &i);
    put_stringn(s, i);

    return 0;
}