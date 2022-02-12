#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUMBER 7

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
    int v[NUMBER];
    int y[NUMBER + 1];
    int i, key,num;
    printf("要接收的数据是：");
    scanf("%d", &key);
    for (i = 0; i < NUMBER; i++) {
        printf("v[%d]=", i);
        scanf("%d", &v[i]);
    }
    int num = search_idx(v, y, key, NUMBER);
    for (i = 0; i < num; i++) {
        printf("对应的下标是y[%d]:\n", y[num]);
    }
    printf("有%d个相同的元素", num);

    return 0;
}
