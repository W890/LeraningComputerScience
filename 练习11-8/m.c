
#include <stdio.h>

void del_digit(char* str)
{
    char* p = str;
    while (*str) {
        if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')) {
            *p++ = *str++;
        } else {
            str++;
        }
    }
    *p = '\0';
}

int main()
{
    char str[128] = "AB1C9";

    printf("ȥ�����ֺ��ַ�����Ϊ:");
    del_digit(str);
    puts(str);

    return 0;
}