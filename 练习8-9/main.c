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
    printf("���������Ϊ%d��\n", n);
    return 0;
}