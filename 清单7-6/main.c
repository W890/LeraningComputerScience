#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int count_bits(unsigned x)
{
    int bits = 0;
    while (x) {
        if (x & 1U)    bits++;
        x >>= 1;
    }

    return (bits);
}

int int_bits(void)
{
    return count_bits(~0U);
}

int print_bits(unsigned x)
{
    int i;

    for (i = int_bits() - 1; i >= 0; i--) {
        unsigned xx = x >> i;
        unsigned yy = xx & 1;
        putchar(yy ? '1' : '0');
    }
}
int main()
{
    unsigned a, b;

    printf("�����������Ǹ�������");
    printf("����a��");   
    scanf("%u", &a);
    printf("����b��");   
    scanf("%u", &b);

    printf("\na       =");    print_bits(a);
    printf("\nb       =");    print_bits(b);
    printf("\na & b   =");    print_bits(a & b);
    printf("\na | b   =");    print_bits(a | b);
    printf("\na ^ b   =");    print_bits(a ^ b);
    printf("\n~a      =");    print_bits(~a);
    printf("\n~b      =");    print_bits(~b);
    putchar('\n');

    return (0);
}