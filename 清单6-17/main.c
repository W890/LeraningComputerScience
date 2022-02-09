#include<stdio.h>
int x = 75;
void printf_x(void)
{
    printf("x = %d\n", x);			
}
int main()
{
    int i;
    int x = 999;

    printf_x();

    printf("x = %d\n", x);

    for (i = 0; i < 5; i++) {
        int x = i * 100;
        printf("x = %d\n", x);
    }
    printf("x = %d\n", x);

    return (0);
}