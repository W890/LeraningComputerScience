#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int gcd(int x, int y)
{
    int z;

    if (x != y) {
        if (x > y)
            x -= y;
        else
            y -= x;
        z = gcd(x, y);
    } else
        z = x;
    return z;
}
int main()
{
    int x, y;
    printf("请输入两个整数的值。\n");
    printf("第一个整数: ");       
    scanf("%d", &x);
    printf("第二个整数: ");       
    scanf("%d", &y);
    printf("两个整数的最大公约数为%d。", gcd(x, y));

    return 0;
}