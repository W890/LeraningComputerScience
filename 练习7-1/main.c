#include <stdio.h>

int main() {
    int n;
    printf("%d %d %d", sizeof 1,sizeof(unsigned)-1,sizeof n+2 );                                                                  
    printf("%d %d %d", sizeof +1, sizeof(double) - 1, sizeof(n + 2));
    printf("%d %d %d", sizeof - 1, sizeof((double)-1), sizeof (n + 2.0)  );

    return 0;
}