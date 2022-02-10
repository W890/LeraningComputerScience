#include <stdio.h>
#define number 4
int main() {
    int i;
    static double x[number];
    for (i = 0; i < number; i++) {
        printf("v[%d]=%.1f", i, x[i]);
        putchar('\n');
    }
    return 0;
}