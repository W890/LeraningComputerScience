#include <stdio.h>

#define score1 4
#define score2 3
#define score3 2

int main(void)
{
    int i, j, k;
    int tensu1[score1][score2] = { {91,63,78},{67,72,46},{89,34,53},{32,54,54} };
    int tensu2[score1][score2] = { {97,67,82},{73,43,46},{97,56,21},{85,46,35} };
    int tensu[score3][score1][score2] = { 0 };

    for (i = 0; i < score1; i++)
        for (j = 0; j < score2; j++)
            tensu[0][i][j] = tensu1[i][j];

    for (i = 0; i < score1; i++)
        for (j = 0; j < score2; j++)
            tensu[1][i][j] = tensu2[i][j];

    for (k = 0; k < score3; k++) {
        printf("µÚ%d´Î¿¼ÊÔ\n", k + 1);
        for (i = 0; i < score1; i++) {
            for (j = 0; j < score2; j++) {
                printf("%d ", tensu[k][i][j]);
            }
            putchar('\n');
        }
        putchar('\n');
    }


}