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

    printf("������%d���˵���ߡ�\n", NUMBER);
    for (i = 0; i < NUMBER; i++) {
        printf("�������%d������ߣ�", i + 1);
        scanf_s("%d", &height[i]);
    }
    bsort(height, NUMBER);      

    puts("����������");

    for (i = 0; i < NUMBER; i++)
        printf("��%d��=%d\n", i + 1, height[i]);

    return 0;
}