#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//    int N;
//    scanf("%d", &N);
//    printf("\n");
//    int a[5] = { 0 };
//    /*for (int i = 1; i <= 5; i++) {
//        scanf("%d", &a[i]);
//    }*/
//    int retty, i = 0;
//    do {
//        scanf("%d", & a[i]);
//        printf("继续？[y...1/n...0]");
//        scanf("%d", &retty);
//        i++;
//        if (i == 4)
//            break;
//    } while (retty == 0);
//
//    int temp = 0,sum = 0;
//    for (int j = 1; j <= 5; j++) {
//        sum += a[j] + a[j + 1];
//        if (temp > sum) {
//            temp = sum;
//        }
//    }
//    printf("%d", temp);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int x1, y1, x2, y2, x3, y3;
//    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
//    double s;
//    s = (x1 * y2 + x2 * y3 + x3 * y1 - x1 * y3 - x3 * y2) / 2.0;
//    printf("%.2f", s);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int y, m, d, i = 0, sum = 0;
//    scanf("%d-%d-%d", &y, &m, &d);
//    int ry[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
//    int py[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//    if (y % 100 == 0 || y % 4 == 0 && y % 100 != 0) {
//        for (i = 0; i < m - 1; i++) {
//            sum += ry[i];
//        }
//        printf("%d", sum + d);
//    } else {
//        for (i = 0; i < m - 1; i++) {
//            sum += py[i];
//        }
//        printf("%d", sum + d);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int N;
//    scanf("%d", &N);
//    int a[10] = { 0 };
//    int n = N, m = 0,i = 0;
//    while (n) {
//        m = n % 10;
//        n /= 10;
//        a[i++] = m;
//    }
//    for (int j = i - 1; ; j--) {
//        if (a[j] == 0) {
//            a[j] = 5;
//        }
//        printf("%d",a[j]);
//        if (j == 0) {
//            break;
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//    int zim = 1, zam = 1;
//    if (a <= 2)  zim = 1;
//    for (int i = 2; i < a; i++) {
//        if (a % i == 0)  break;
//        if (i < a) zim = 1;
//        else zim = 0;
//    }
//    if (b <= 2) zam = 1;
//    for (int j = 2; j < b; j++) {
//        if (b % j == 0) break;
//        if (j < b) zam = 1;
//        else zam = 0;
//    }
//    if (zim == 1 && zam == 1 && a - b == 2 || b - a == 2) {
//        printf("YES");
//    } else {
//        printf("NO");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int N;
//    scanf("%d", &N);
//    int NUM = N*N;
//    int n = N, i = 0, m = 0;
//    int a[10] = { 0 };
//    while (n) {
//        m = n % 10;
//        n /= 10;
//        a[i++] = m;
//    }
//    int b[10] = { 0 };
//    int num = NUM, j = 0, k = 0;
//    while (num) {
//        k = num % 10;
//        num /= 10;
//        b[j++] = k;
//    }
//    int len = 0;
//    for (int t = 0; t < i; t++) {
//        if (a[t] == b[t]) {
//            len++;
//        } 
//    }
//    if (len == i)
//        printf("YES");
//    else {
//        printf("NO");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int N;
//    scanf("%d", &N);
//    int m = 1, temp[19999] = { 0 }, size = 1;
//    for (int i = 1; i < 17; i++) {
//        temp[i] = m *= i;
//        if (temp[i] == N) {
//            size = 1;
//            break;
//        } else {
//            size = 0;
//        }
//    }
//    if (size == 1) {
//        printf("YES");
//    } else {
//        printf("NO");
//    }
//    return 0;
//}
//#include <stdio.h>
//int main() {
//	int N;
//	scanf("%d", &N);
//	int n = N, i = 0, m = 0;
//	int a[10] = 10;
//	while (n) {
//		m = n % 10;
//		n /= 10;
//		a[i++] = m;
//	}
//	int sum = 0;
//	for (int j = 0; j < i; j++) {
//		sum += a[j];
//	}
//}
//#include<stdio.h>
//#include <math.h>
//int main()
//{
//    int x1, y1, x2, y2;
//    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
//    int x = x1 - x2;
//    int y = y1 - y2;
//    double dest = sqrt((x * x * 1.0) + (y * y * 1.0));
//    printf("%d", (int)(dest + 0.5));
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    double a[100] = { 0 };
//    double sum1 = 0, sum2 = 0;
//    for (int i = 0; i <= n; i++) {
//        scanf("%lf ", &a[i]);
//        if (a[i] >= 0) {
//            sum1 += a[i];
//        } else  {
//            sum2 += a[i];
//        }
//    }
//    printf("%.6f %.6f", sum1, sum2); 
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    for (int i = 0; i < 5; i++) {
//        int a1, b1, a2, b2;
//        double num = 0.0;
//        double size1 = 0.0;
//        double size2 = 0.0;
//        scanf("%d/%d %d/%d", &a1, &b1, &a2, &b2);
//        size1 = a1 / b1;
//        size2 = a2 / b2;
//        num = size1 * size2 * 1.0;
//        printf("%.6f\n", num);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int N;
//    scanf("%d", &N);
//    int n = N, m = 0, i = 0;
//    int a[10] = { 0 };
//    while (n) {
//        m = n % 10;
//        n /= 10;
//        a[i++] = m;
//    }
//    int sum = 0;
//    int b[10] = { 0 };
//    for (int j = 0; j < 10; j++) {
//        int num = 1;
//        for (int k = 1; k <= a[j]; k++) {
//            num *= a[k - 1];
//        }
//        b[j] = num;
//        sum += b[j];
//    }
//    if (sum == N) {
//        printf("YES");
//    } else {
//        printf("NO");
//    }
//}
//#include<stdio.h>
//#define num  10
//int main()
//{
//    int N;
//    scanf("%d", &N);
//    int a[num] = { 0 };
//    int b[num] = { 0 };
//    for (int i = 0; i < N; i++) {
//        scanf("%d", &a[i]);
//    }
//    for (int k = 0; k < N; k++) {
//        scanf("%d", &b[k]);
//    }
//    int c[num] = { 0 };
//    for (int j = 0; j < N; j++) {
//        int sum = 0;
//        sum = a[j] + b[j];
//        c[j] = sum;
//        printf("%d ", c[j]);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int a[30] = { 1,7,49,343 };
//    int min = 0, c = 4;
//    for (int i = 0; i < 4; i++) {
//        for (int j = i; j < 4; j++) {
//            if (i != j) {
//                a[c] = a[i] + a[j];
//                c++;
//            }
//            for (int x = j; x < 4; x++) {
//                if (i != j && x != j) {
//                    a[c] = a[i] + a[j] + a[x];
//                    c++;
//                }
//            }
//        }
//    }
//    for (int i = 0; i < c; i++) {
//        for (int j = i; j < c; j++) {
//            if (a[j] < min) {
//                min = a[j];
//                a[j] = a[i];
//                a[i] = min;
//            }
//        }
//    }
//    printf("%d ", a[n - 1]);
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char a[20] = { 0 };
//    //scanf("%s", &a);
//    int i = 0;
//    for (i = 0; i < 20; i++) {
//        scanf("%c", &a[i]);
//    }
//    int n;
//    scanf("%d", &n);
//    //int len = strlen(a);
//    for (int j = n; j <= i; j++) {
//        printf("%c", a[j]);
//    }
//    return 0;
//}
//#include<stdio.h>
////#include<string.h>
//int main() {
//    char a;
//    getchar();
//    //scanf("%s", &a);
//    int n;
//    scanf("%d", &n);
//    int i = 0;
//    while (getchar()) {
//        if (i == n) {
//            printf("%c", a);
//            i++;
//        }
//    }
//    return 0;
//	char a[100] = { "wangyakun" };
//	char b[100] = { "wang ya kun" };
//	int c[100] = { "1,2,3,4,5,6" };
//	int len1 = strlen(a);
//	int len2 = strlen(b);
//	int len3 = sizeof(c);
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char s1[100], s2[100];
//    int num;
//    int a = gets(s1);
//    int b = gets(s2);
//    int n1 = strlen(s1);
//    int n2 = strlen(s2);
//    scanf("%d", &num);
//    if (num >= n1) {
//        for (int i = n1; i < n2 + n1; i++) {
//            s1[i] = s2[i - n1];
//        }
//    } else {
//        for (int i = n1 - 1; i >= num; i--) {
//            s1[i + n2] = s1[i];
//        }
//        for (int i = 0; i < n2; i++) {
//            s1[i + num] = s2[i];
//        }
//    }
//    s1[n1 + n2] = '\0';
//    printf("%s\n", s1);
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main() 
//{
//	int n;
//	scanf("%d", &n);
//	int a[100] = { 0 };
//	int i = 0;
//	while (n) {
//		int complement = n % 2;
//		int divisor = n /= 2;
//		a[i++] = complement;
//	}
//	double num = 0.0;
//	for (int k = 0; k < i; k++) {
//		if (a[k] == 0)
//			a[k] = 1;
//		else 
//			a[k] = 0;
//		double zim = pow(2.0, k);
//		num += a[k] * zim;
//	}
//	printf("%d", (int)num);
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a1, a2, a3, a4, a5;
//	scanf("%d", &a1, &a2, &a3, &a4, &a5);
//	for (int i = 0; i < 5; i++) {
//		int a[100] = { 0 };
//		int i = 0;
//		while (n) {
//			int complement = n % 2;
//			int divisor = n /= 2;
//			a[i++] = complement;
//		}
//	}
//	for (int m = 0; m < 5; m++) {
//		for (int j = 0; j < i; j++) {
//			int temp = a[j];
//			a[j] = a[i - j];
//			a[i - j] = temp;
//		}
//	}
//	for (int k = 0; k < i; k++) {
//		printf("%d", a[k]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int sum = 0;
//    for (int i = 0; i <= 9; i++) {
//        for (int j = 0; j <= 9; j++) {
//            for (int k = 0; k <= 9; k++) {
//                if (k != 0 && i != j && j != k && i != k) sum++;
//            }
//        }
//    }
//    printf("%d", sum);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a, b, n;
//    scanf("%d %d %d", &a, &b, &n);
//    int z[20] = { 0 };
//    a = a % b;
//    z[0] = a / b;
//    for (int i = 1; i <= n; i++) {
//        a *= 10;
//        z[i] = a / b;
//        a = a % b;
//    }
//    if (z[n + 1] >= 5) {
//        z[n++];
//        for (int i = n - 1; i >= 1; i--) {
//            if (z[i + 1] == 10) {
//                z[i]++;
//                z[i + 1] = 0;
//            }
//        }
//        if (z[i] == 10)
//            z[0]++;
//        z[1] = 0;
//    }
//    printf("%d.", z[0]);
//    for (int j = 1; j <= n; j++) {
//        printf("%d", z[j]);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n, m, x;
//    int i, j,k;
//    scanf("%d %d %d", &n, &m, &x);
//    int f[31][100] = { 0 };
//    for (j = 1; j <= m && j <= x; j++) {
//        f[1][j] = 1;
//    }
//    for (i = 2; i <= n; i++) {
//        for (j = 1; j <= x; j++) {
//            for ( k = 1; k < j && k <= m; k++)
//                f[i][j] += f[i - 1][j - k];
//        }
//    }
//    printf("%d ", f[n][x]);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n, x;
//    scanf("%d %d", &n, &x);
//    int a[200] = { 0 };
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &a[i]);
//    }
//    int num;
//    int zim = 1;
//    for (int i = 0; i < n; i++) {
//        for (int j = i + 1; i < n; j++) {
//            for (int k = j + 1; k < n; k++) {
//                for (int m = k + 1; m < n; m++) {
//                    num = a[i] + a[j] + a[k] + a[m];
//                    if (num == x) {
//                        zim = 1;
//                        break;
//                    } else zim = 0;
//                }
//                break;
//            }
//            break;
//        }
//        if (num == x)break;
//    }
//    if (zim == 1) {
//        printf("1");
//    } else printf("0");
//    return 0;
//}
//#include<stdio.h>
//double avg(int arr[], int begin, int end) {
//    double sum = 0;
//    for (int i = begin; i <= end; i++) {
//        sum += arr[i];
//    }
//    double avg = sum / (end - begin + 1);
//    return avg;
//}
//int main()
//{
//    int a[100], begin, end, n;
//    scanf("%d %d %d", &n, &begin, &end);
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &a[i]);
//    }
//    printf("%f", avg(a, begin, end));
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//double f(double x) {
//    if (x >= 0) return sprt(x);
//    else return x + 33;
//}
//int main()
//{
//    int x;
//    scanf("%d", &x);
//    printf("%.6f", f(x));
//    return 0;
//}
//#include<stdio.h>
//int jia(int N, int a[], int b[],int c[]) {
//    int sum = 0;
//    for (int i = 0; i < N; i++) {
//        sum = (a[i] + b[i]);
//        c[i] = sum;
//    }
//    return *c;
//}
//int jian(int N, int a[], int b[],int d[]) {
//    int sum2 = 0;
//    for (int i = 0; i < N; i++) {
//        sum2 = (a[i] - b[i]);
//        d[i] = sum2;
//    }
//    return *d;
//}
//int cheng(int N, int a[], int b[],int e[]) {
//    int sum3 = 0;
//    for (int i = 0; i < N; i++) {
//        sum3 = (a[i] * b[i]);
//        e[i] = sum3;
//    }
//    return *e;
//}
//int chu(int N, int a[],int b[],int f[]) {
//    int sum4 = 0;
//    for (int i = 0; i < N; i++) {
//        sum4 = (a[i] / b[i]);
//        f[i] = sum4;
//    }
//    return *f;
//}
//int main()
//{
//    int N;
//    scanf("%d", &N);
//    int a[100] = { 0 };
//    int b[100] = { 0 };
//    int c[100] = { 0 };
//    for (int i = 0; i < N; i++) {
//        scanf("%d ", &a[i]);
//    }
//    for (int i = 0; i < N; i++) {
//        scanf("%d ", &b[i]);
//    }
//    char zim[4] = { '+','-','*','/' };
//    for (int i = 0; i < 4; i++) {
//        scanf("%c", &zim[i]);
//    }
//    if ('+') {
//        for (int i = 0; i < N; i++) {
//            printf("%d ", jia(N, a, b,c));
//        }
//    } else if ('-') {
//        for (int i = 0; i < N; i++) {
//            printf("%d ", jian(N, a, b,c));
//        }
//    } else if ('*') {
//        for (int i = 0; i < N; i++) {
//            printf("%d ", cheng(N, a, b,c));
//        }
//    } else if ('/') {
//        for (int i = 0; i < N; i++) {
//            printf("%d ", chu(N, a, b,c));
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//change(double m, double c) {
//    double p = 0;
//    double zim = 0;
//    p = c - m;
//    while (p > 0) {
//        if (m >= 50) m -= 50;
//        else if (p >= 20) m -= 20;
//        else if (p >= 10) m -= 10;
//        else if (p >= 5) m -= 5;
//        else if (p >= 2) m -= 2;
//        else if (p >= 1) m -= 1;
//        else if (p >= 0.5) m -= 0.5;
//        else if (p >= 0.2) m -= 0.2;
//        else if (p >= 0.1) m -= 0.1;
//        else if (p >= 0.05) m -= 0.05;
//        else if (p >= 0.02) m -= 0.02;
//        else zim -= 0.01;
//        zim++;
//    }
//    return zim;
//}
//int main()
//{
//    double m, c;
//    scanf("%lf %lf", &m, &c);
//    printf("%d", (int)change(m, c));
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//typedef struct {
//    int* len;
//}LEN;
//
//int t(int n, int a[]) {
//    LEN pa;
//    for (int i = 0; i < 10; i++) {
//        int temp = n % 2;
//        a[i] = temp;
//        n /= 10;
//        pa.len++;
//    }
//    return *a;
//}
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int b[100] = { 0 };
//    int c[100] = { 0 };
//    t(n,b);
//    LEN pb;
//    int k = 0;
//    if (b[0] = 1) {
//        b[0] = 1;
//        for (int j = pb.len; j >= 0; j -= 2) {
//            if (b[j] = 1) {
//                c[k++] = b[j];
//            } else {
//                break;
//            }
//    } else {
//
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int a[5][5] = { 0 };
//    int maxx, minn;
//    int b[10] = { 0 };
//    int j = 0;
//    for (int i = 0; i < n; i++) {
//        maxx = a[i][0];
//        for (j = 0; j < n; j++) {
//            scanf("%d", &a[i][j]);
//            if (a[i][j] > maxx) {
//                maxx = a[i][j];
//            }
//        }
//        b[i] = maxx;
//    }
//    minn = b[0];
//    for (int k = 0; k < n; k++) {
//        if (b[k] < minn) {
//            minn = b[k];
//        }
//    }
//    printf("%d", minn);
//    return 0;
//}
/*设单链表的表头指针为L,结点结构由data、next两个域构成,其中data域为字符型。试设计算法判断该链表
的全部n个字符是否中心对称。例如xyx、xyyx都是中心对称。*/
//#include<stdio.h>
//#include<stdlib.h>
//#define MaxSize 50
//typedef char ElemType;
//typedef struct LNode {
//	ElemType data;
//	struct LNode* next;
//}LNode, * LinkList;
//
//LinkList tailInsert(LinkList& amp; L)
//{
//	ElemType x;
//	L = (LinkList)malloc(sizeof(LNode));
//	LNode* r = L;
//	scanf("%c", &amp; x);
//	while (x != '\n') {
//		LNode* s = (LNode*)malloc(sizeof(LNode));
//		s->data = x;
//		r->next = s;
//		r = s;
//		scanf("%c", &amp; x);
//	}
//	r->next = NULL;
//	return L;
//}
//
//bool printList(LinkList L)
//{
//	LNode* s = L->next;
//	while (s) {
//		printf("%c", s->data);
//		s = s->next;
//	}
//	printf("\n");
//	return true;
//}
//
//bool judgeSym(LinkList L, int n)
//{
//	int i;
//	ElemType a[MaxSize];
//	LNode* p = L->next;
//	for (i = 0; i < n / 2; ++i) {
//		a[i] = p->data;
//		p = p->next;
//	}
//	--i;
//	if (n % 2 == 1)
//		p = p->next;
//	while (p& amp; &amp; a[i] == p->data) {
//		--i;
//		p = p->next;
//	}
//	if (i == -1) {
//		printf("YES\n");
//		return true;
//	} else {
//		printf("NO\n");
//		return false;
//	}
//}
//
//void main()
//{
//	LinkList L;
//	tailInsert(L);
//	printList(L);
//	judgeSym(L, 5);
//}
//# include <stdio.h>
//# include <stdlib.h>
//# define MAXSIZE 10
//# define DATATYPE int
//typedef struct node {
//    DATATYPE data[MAXSIZE];
//    int top;
//}SEQSTACK;
//
//void init_stack(SEQSTACK* S)
//{
//    S->top = -1;
//}
//
//void stack_push(SEQSTACK* S, DATATYPE n)
//{
//    if (S->top == MAXSIZE - 1) {
//        printf("full stack!\n");
//        return;
//    }
//    S->data[++(S->top)] = n;
//}
//
//int isEmpty(SEQSTACK* S)
//{
//    int isEmpty = S->top == -1 ? 1 : 0;
//    return isEmpty;
//}
//DATATYPE pop_stack(SEQSTACK* S)
//{
//    if (isEmpty(S)) {
//        printf("empty stack！\n");
//        return;
//    }
//    // 出栈先出栈顶
//    DATATYPE data = S->data[S->top];
//    S->top--;
//    return data;
//}
//
//
//int isSymmetric_stack(SEQSTACK* S)
//{
//    // 利用栈的特性判断一个字符串是否是中心对称图形，如abba，abcba都是中心对称图形
//    int i = 0, len = (S->top + 1), isSymmetric = 0;
//    SEQSTACK* p = (SEQSTACK*)malloc(sizeof(SEQSTACK));
//    init_stack(p);
//    for (i; i < len / 2; i++) {
//        stack_push(p, S->data[S->top]);
//        S->top--;
//    }
//    if (len % 2 == 1) {
//        S->top--;//为奇数时top指针要往下移动一格
//    }
//    while (pop_stack(p) == S->data[S->top]) {
//        S->top--;
//        if (S->top == -1) {
//            isSymmetric = 1;
//            break;
//        }
//    }
//    return isSymmetric;
//}
//
//void main()
//{
//    SEQSTACK* s = (SEQSTACK*)malloc(sizeof(SEQSTACK));
//    init_stack(s);
//    stack_push(s, 1);
//    stack_push(s, 9);
//    stack_push(s, 8);
//    stack_push(s, 9);
//    stack_push(s, 1);
//    printf("%d\n", isSymmetric_stack(s));
//}
//#include<stdio.h>
//int main() {
//	char a[10];
//	int len = 0;
//	for (int i = 0; i < 10; i++) {
//		scanf("%c", &a[i]);
//		if (a[i] == '\n') {
//			break;
//		} else {
//			len++;
//		}
//	}
//	int size = 0;
//	int g = len - 2;
//	int j = 0;
//	for (j = 0; j <= len - 2; j++) {
//		if ((len - 2) % 2 == 0) {
//			if (j == g)
//				break;
//			if (a[j] == a[g]) {
//				g--;
//				size++;
//			}
//		} else {
//			if (j == g - 1) {
//				break;
//			}
//			if (a[j] == a[g]) {
//				g--;
//				size++;
//			}
//		}
//	}
//	if (size == j)
//		printf("YES");
//	else printf("NO");
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int a[10] = { 0 };
//    int b[10] = { 0 };
//    int c[10] = { 0 };
//    int lenn = 0;
//    for (int i = 0; i < 10; i++) {
//        scanf("%d", &a[i]);
//        lenn++;
//    }
//    for (int i = 0; i < 10; i++) {
//        scanf("%d", &b[i]);
//    }
//    for (int i = 0; i < 10; i++) {
//        if (a[i] == b[i] && a[i] == 1 && b[i] == 1) {
//            c[i] = 1;
//        } else if (a[i] == 1 && b[i] == 0) {
//            c[i] = 0;
//        }if (a[i] == 0 && b[i] == 1) {
//            c[i] = 0;
//        }
//    }
//    double zim = 0.0;
//    int len = 0;
//    for (double j = lenn - 1.0; j > 0.0; j--) {
//        
//        zim += (c[len++] * pow(2.0, j));
//    }
//    printf("%d", (int)zim);
//    return 0;
//}
#include<stdio.h>
#include<math.h>
int main() 
{
    int a, b;
    scanf("%d %d", &a, &b);
    int z1[10] = { 0 }, z2[10] = { 0 }, z3[10] = { 0 };
    int A, m1, B, m2, i = 0, j = 0;
    A = a;
    while (A) {
        m1 = A % 10;
        A /= 10;
        z1[i++] = m1;
    }
    B = b;
    while (B) {
        m2 = B % 10;
        B /= 10;
        z2[j++] = m2;
    }
    for (int i = 0; i < 10; i++) {
        if (z1[i] == z2[i] && z1[i] == 1 && z2[i] == 1) {
            z3[i] = 1;
        } else if (z1[i] == 1 && z2[i] == 0) {
            z3[i] = 0;
        }if (z1[i] == 0 && z2[i] == 1) {
            z3[i] = 0;
        }
    }
    double zim = 0.0;
    int len = 0;
    for (int z = 0; z > j; z++) {
        zim += (z3[j] * pow(2.0, z));
    }
    printf("%d", (int)zim);
    return 0;
}