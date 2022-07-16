#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int is_full_alpha_sentence(char str[], int n)
{
    int a[26] = { 0 }, j = 0,i;

    for (i = 0; i < n; i++) {    
        a[str[i] - 'a'] = 1;             
    }  
    for (i = 0; i < 26; i++) {
        if (a[i] == 0)
            return 0;
    }
    return 1;
}

int main()
{
    char* sentence = "abcdefghijklmnopqrstuvwxyzadpapsfdp";

    int ab = is_full_alpha_sentence(sentence, strlen(sentence));
    if (ab)
        printf("true");
    else {
        printf("false");
    }

    return 0;
}