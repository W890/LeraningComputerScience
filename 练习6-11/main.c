#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUMBER 7

int search_idx(const int v[], int idx[], int key, int n) {

    int i;
    int x = 0;
    for (i = 0; i < n; i++) {
        if (v[i] == key) {
            idx[x++] = i;      
        }
    }
    return x;
}
int main() {
    int v[NUMBER];
    int y[NUMBER];
    int i, key,num;
    printf("Ҫ���յ������ǣ�");
    scanf("%d", &key);
    for (i = 0; i < NUMBER; i++) {
        printf("v[%d]=", i);
        scanf("%d", &v[i]);
    }
    num = search_idx(v, y, key, NUMBER);
    printf("��%d����ͬ��Ԫ��", num);
    for (i = 0; i < num; i++) {
        printf("��Ӧ���±���y[%d]= %d\n", i, y[i]);
    }
    

    return 0;
}
