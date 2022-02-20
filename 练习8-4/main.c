#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUMBER 5
void bsort(int a[], int n)   
{
    int i, j;

    for (i = 0; i < n - 1; i++) {  
        for (j = n - 1; j > i; j--) { 
            if (a[j - 1] < a[j]) {
                int tmp = a[j];   
                a[j] = a[j - 1];
                a[j - 1] = tmp;
            }
        }
    }
}
int main()
{
    int i;
    int height[NUMBER];

    printf("请输入%d个人的身高。\n", NUMBER);
    for (i = 0; i < NUMBER; i++) {
        printf("请输入第%d名的身高：", i + 1);
        scanf_s("%d", &height[i]);
    }
    bsort(height, NUMBER);      

    puts("按降序排列");

    for (i = 0; i < NUMBER; i++)
        printf("第%d号=%d\n", i + 1, height[i]);

    return 0;
}