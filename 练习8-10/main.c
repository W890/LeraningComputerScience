#include<stdio.h>
int main()
{
    int i, ch;
    int cnt[10] = { 0 };
    while ((ch = getchar()) != EOF) {
        if (ch >= '0' && ch <= '9') {
            cnt[ch - '0']++;
        }
    }
    printf("�����ַ��ĳ��ִ�����\n");
    for (i = 0; i < 10; i++) {
        printf("'%d':", i);
        while (cnt[i] > 0) {
            putchar('*');
            cnt[i]--;
        }
        putchar('\n');
    }
    return 0;
}