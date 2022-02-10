#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define number 5

int search_idx(const int v[], int idx[], int key, int n) {

    int i;
    int x = 0;
    for (i = 0; i < n; i++) {
        if (v[i] == key)
            x++;
        idx[x] = v[i];
    }
    return x;
}

int main() {
    int v[number];
    int y[number + 1];

    int i;
    int key;
    printf("要查找的值是：");
    scanf("%d", &key);
    for (i = 0; i < number; i++) {
        printf("v[%d]=", i);
        scanf("%d", &v[i]);
    }
    int x = search_idx(v, y, key, number);
    printf("有%d个相同的元素", x);

    return 0;
}

