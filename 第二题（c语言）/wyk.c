#include <stdio.h>

int del_digit(char* str)
{
    while (*str) {
        if (*str >= 'a' && *str <= 'z') {
            return 1;
        } else {
            return 0;
        }
    }
}

int main()
{
    char* arr = "sentence";

    int ab = del_digit(arr);
    if (ab)
        printf("true");
    else {
        printf("false");
    }

    return 0;
}