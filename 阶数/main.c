#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fu_to_zheng(int c)
{
    int i = 0;
    if (c < 0) {
        c *= -1;
        i = c;
    }
    return i;
}
int Count_Digit(const int N, const int D)
{
    int n = N;
    int array_len = 0;
    int array_digits[10] = { 0 };
    int number[10] = { 0 };
    int m = 0;
    int i = 0;

    int j = fu_to_zheng(N);
  
    while (j) {
        m = j % 10;
        j /= 10;
        array_digits[array_len++] = m;
    }
    for (i = 0; i < array_len; i++) {
        number[array_digits[i]]++;
    }

    for (i = 0; i < D; i++) {
        if (i == D)
            return number[i];
    }
    
    return number[i];
}
  
int main()
{
    int N, D;

    scanf("%d %d", &N, &D);
    printf("%d\n", Count_Digit(N, D));
    return 0;
}