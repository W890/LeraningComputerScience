#include<stdio.h>
int main()
{
    char s[] = "ABC";

    printf("�ַ���Ϊ\"%s\"��\n", s);
    s[0] = '\0';
    printf("�ַ���Ϊ\"%s\"��\n", s);

    return 0;
}