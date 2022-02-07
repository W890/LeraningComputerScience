#include <stdio.h>

#define SCORE1 4
#define SCORE2 3
#define SCORE3 2

int main(void)
{
    int i, j, k;
    int array1[SCORE1][SCORE2] = { {91,63,78},{67,72,46},{89,34,53},{32,54,54} };
    int array2[SCORE1][SCORE2] = { {97,67,82},{73,43,46},{97,56,21},{85,46,35} };
    int array[SCORE3][SCORE1][SCORE2] = { 0 };

    for (i = 0; i < SCORE1; i++)
        for (j = 0; j < SCORE2; j++)
            array[0][i][j] = array1[i][j];

    for (i = 0; i < SCORE1; i++)
        for (j = 0; j < SCORE2; j++)
            array[1][i][j] = array2[i][j];

    for (k = 0; k < SCORE3; k++) {
        printf("µÚ%d´Î¿¼ÊÔ\n", k + 1);
        for (i = 0; i < SCORE1; i++) {
            for (j = 0; j < SCORE2; j++) {
                printf("%d ", array[k][i][j]);
            }
            putchar('\n');
        }
        putchar('\n');
    }


}