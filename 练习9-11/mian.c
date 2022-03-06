#include<stdio.h>
#include<string.h>
#define NUMBER 10
#define SIZE 128
void put_strary(char s[NUMBER][SIZE], int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (strcmp(s[i], "$$$$$") == 0)
            break;
        printf("s[%d] = \"%s\"\n", i, s[i]);
    }
}
int main()
{
    int i;
    char cs[NUMBER][SIZE];

    printf("ÇëÊäÈë%d¸ö×Ö·û´®¡£\n", NUMBER);
    for (i = 0; i < NUMBER; i++) {
        printf("s[%d] = ", i);
        scanf("%s", cs[i]);
        if (strcmp(cs[i], "$$$$$") == 0)
            break;
    }
    put_strary(cs, NUMBER);

    return 0;
}