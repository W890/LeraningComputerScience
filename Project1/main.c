#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <limits.h>
//#include <string.h>
//int main()
//{
//    int ch;
//    //scanf("%s", &str);
//
//    int i = 0;
//    int word_pos = -1;
//    while ((ch = getchar()) != '.') {
//        if (ch == ' ') {
//            if (word_pos != -1) {
//                printf("%d ", i - word_pos);
//                word_pos = -1;
//
//            } 
//        } else {
//            if (word_pos == -1) {
//                word_pos = i;
//            }
//        }
//        i++;
//
//    }
//    if (word_pos != -1) {
//        printf("%d ", i - word_pos);
//        word_pos = -1;
//
//    }
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#define N 100
//
//int main()
//{
//    int n, k, arr[N], i, j, t;
//    scanf("%d%d", &n, &k);
//    for (i = 0; i < n; i++) {
//        scanf("%d", &arr[i]);
//    }
//    for (j = 0; j < k; j++) {
//        for (i = 0; i < n - 1; i++) {
//            if (arr[i] > arr[i + 1]) {
//                t = arr[i];
//                arr[i] = arr[i + 1];
//                arr[i + 1] = t;
//            }
//        }
//    }
//    for (i = 0; i < n - 1; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("%d", arr[n - 1]);
//    return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//typedef struct none {
//	int m;
//	struct none* next;
//}none;
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	/*int b[n] = { 0 };
//	while (1) {
//		int m = n % 10;
//
//	}*/
//	int a[n];
//	int i;
//	while (a[i] != NULL) {
//		for (i = 1; i <= n; i++) {
//			int j = 1;
//			j++;
//			if (j == 3) {
//				j = 1;
//				a[i] = NULL;
//			}
//		}
//	}
//	printf("%d", a[i]);
//
//	return 0;
//	
//
//}
#include <stdio.h>
int main()
{
    int ch;

    int i = 0;
    int word_pos = -1;
    int first = 1;
    while ((ch = getchar()) != '.') {
        if (ch == ' ') {
            if (word_pos != -1) {
                if (first == 1) {
                    printf("%d", i - word_pos);
                    first = 0;
                } else {
                    printf(" %d", i - word_pos);                 
                }
                word_pos = -1;
            }
        } else {
            if (word_pos == -1) {
                word_pos = i;
             
            }
        }
        i++;
    }
    if (word_pos != -1) {
        if (first == 1) {
            printf("%d", i - word_pos);
        } else {
            printf(" %d", i - word_pos);
        }
    }
    return 0;
}