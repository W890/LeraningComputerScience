#include<stdio.h>
int main()
{
    int ch;
    int n = 0;
    while ((ch = getchar()) != EOF) {
        if (ch == '\n') {
            ++n;
        }
    }
    printf("输入的行数为%d。\n", n);
    return 0;
}