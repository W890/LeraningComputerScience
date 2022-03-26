#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void rev_string(char s[]) {
    int n;
    int s[3];

    for (int i = 0; i < n / 2; i++) {
        rev_swap(s[i], s[n - i - 1]);
    }
}
int main()
{
    char s[128];
    int i,n;
    printf("ÇëÊäÈë×Ö·û´®: ");
    for (i = 0; i < 3; i++) {
        printf("s[%d]:", i);
        scanf("%s", &s[i]);
    }
    rev_string(s);
    printf("¸üÐÂºóµÄ×Ö·û´®: %s", s);
    for (i = 0; i < n; i++)
        printf("%d ", s[i]);

    return 0;
}