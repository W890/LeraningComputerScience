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
    printf("����������������ֵ��\n");
    printf("��һ������: ");       
    scanf("%d", &x);
    printf("�ڶ�������: ");       
    scanf("%d", &y);
    printf("�������������Լ��Ϊ%d��", gcd(x, y));

    return 0;
}