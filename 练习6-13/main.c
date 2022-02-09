#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void mat_add(const int a[4][3], const int b[4][3], int c[2][4][3])
{
    int x, y, z;

    for (x = 0; x < 2; x++)
        for (y = 0; y < 4; y++)
            for (z = 0; z < 3; z++) {
                c[x][y][z] = a[y][z] + b[y][z];
            }
}
void mat_print(const int m[4][3])
{
    int i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++)
            printf("%4d", m[i][j]);
        putchar('\n');
    }
}
int main()
{
    int score1[4][3] = { {91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34} };
    int score2[4][3] = { {97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35} };
    int sum[2][4][3];            

    mat_add(score1, score2, sum);                

    puts("第一次考试的分数");  mat_print(score1);    
    puts("第二次考试的分数");  mat_print(score2);    
    puts("总分");        mat_print(sum);        

    return 0;
}
