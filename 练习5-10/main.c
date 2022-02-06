#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int i, j, k;
    int a[4][3];
    int b[3][4];
    

    printf("请输入4行3列矩阵的元素的值:。\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("请输入3行4列矩阵的元素的值:。\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    return 0;
   
}