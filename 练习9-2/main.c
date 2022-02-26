#include<stdio.h>
int main()
{
    char s[] = "ABC";

    printf("×Ö·û´®Îª\"%s\"¡£\n", s);
    s[0] = '\0';
    printf("×Ö·û´®Îª\"%s\"¡£\n", s);

    return 0;
}