#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int squr(int q, int N) 
{
	int temp = 1;
	for (int i = 1; i <= N; i++) {
		temp *= q;
	}
	return temp;
}
int main () 
{
	int a, q, N;
	int sn = scanf("%d %d %d\n", &a, &q, &N);
	while (sn == 3) {
		if (N != 0) {
			int m = squr(q, N);
			int sqr = a * m;
			printf("%d", sqr);
		} else {
			printf("Invalid input");
		}
		sn = scanf("%d %d %d\n", &a, &q, &N);
	}
	return 0;
}
//#include <stdlib.h>
//#include <limits.h>
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	unsigned long long int n1 = 1, n2 = 1, sum = 0;
//	if (N == 1 || N == 2) {
//		printf("1");
//	} else {
//		for (int i = 3; i <= N; i++) {
//			sum = n1 + n2;
//			n1 = n2;
//			n2 = sum;
//		}
//		printf("%lld", sum);
//	}
//	return 0;
//}
//void Print_Factorial(const int n)
//{
//	if (n < 0 || n > 1000) { printf("Invalid input");  return; }
//	int arr[1024] = { 0 };
//	int count = 1;
//	arr[0] = 1;
//	for (int i = 2; i <= n; i++) {
//		int carry = 0;
//		for (int j = 0; j < count; j++) {
//			int m = arr[j] * i + carry;
//			arr[j] = m % 10000;
//			carry = m / 10000;
//		}
//		if (carry > 0) {
//			arr[count++] = carry;
//		}
//	}
//	printf("%d", arr[count - 1]);
//	for (int i = count - 2; i >= 0; i--) {
//		printf("%04d", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int q, N;
//	scanf("%d%d", &q, &N);
//	int temp = 1;
//	for (int i = 1; i <= N; i++) {
//		temp *= q;
//		//temp = q;
//	}
//	printf("%d", temp);
//	return 0;
//}