
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

    printf("去掉数字后，字符串变为:");
    del_digit(str);
    puts(str);

    return 0;
}