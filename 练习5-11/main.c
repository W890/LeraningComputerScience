#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define NUMBER1 6
#define NUMBER2 2
int main()
{   
    int i, j;
    int sum[NUMBER2] = { 0 };
    int array[NUMBER1][NUMBER2] = { {85,96},{85,75},{95,63},{78,89},{56,86,},{82,86} };
    int score[NUMBER1] = { 0 };

    /*for (i = 0; i < 6; i++) {
        for (j = 0; j < 2; j++) {
            printf("请输入第%d位同学第%d门的成绩: ", i + 1, j + 1);
            scanf("%d", &tensu[NUMBER1][NUMBER2]);
        }
    }*/
    for (j = 0; j < NUMBER2; j++) {
        for (i = 0; i < NUMBER1; i++) {
            sum[j] += array[i][j];
        }
    }
    for (j = 0; j < NUMBER2; j++)
        printf("第%d门课的总分是%d,平均分是%.2f。\n", j + 1, sum[j], (double)sum[j] / NUMBER1);
    putchar('\n');


    for (i = 0; i < NUMBER1; i++) {
        for (j = 0; j < NUMBER2; j++) {
            score[i] += array[i][j];
        }
    }
    for (i = 0; i < NUMBER1; i++) {
        printf("第%d位同学的总分是%d，平均分是%.2f。\n", i + 1, score[i], (double)score[i] / NUMBER2);
    }

    return 0;
}