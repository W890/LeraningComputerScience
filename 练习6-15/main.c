#include <stdio.h>
void put_count() {
    static i = 1;
    printf("put-count:��%d��", i++);
    putchar('\n');

}
int main() {
    int i;
    for (i = 0; i < 5; i++) {
        put_count();
    }
    return 0;
}