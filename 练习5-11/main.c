#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int i, j;
    int a[6][2];
    int b[6];  
    int c[2];  
    double d[2];   
    double e[6];   

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 2; j++) {
            printf("�������%dλͬѧ��%d�ŵĳɼ�: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 2; i++) {
        c[i] = 0;
    }
    for (i = 0; i < 6; i++) {
        b[i] = 0;
    }
    for (i = 0; i < 2; j++) {
        for (j = 0; j < 6; j++) {
            c[i] += a[j][i];
        }
        d[i] = c[i] / 6;
        printf("��%d�ſγ̵��ܷ�Ϊ%d, ƽ����Ϊ%.2f\n", i + 1, c[i], d[i]);
    }
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 2; j++) {
            b[i] += a[i][j];
        }
        e[i] = b[i] / 2;
        printf("��%dλѧ�����ܷ�Ϊ%d, ƽ����Ϊ%.2f\n", i + 1, b[i], e[i]);
    }

    return 0;
}