#include <stdio.h>
void put_count() {
    static i = 1;
    printf("put-count:��%d��\n", i++);
}
int main() {
    for (int i = 0; i < 5; i++) {
        put_count();
    }
    return 0;
}