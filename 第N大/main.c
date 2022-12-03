#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double Median(double A[], int N)
{
	int p, j, increment;
	char tmp;
	for (increment = N / 2; increment > 0; increment /= 2) {
		for (p = increment; p < N; p++) {
			tmp = A[p];
			for (j = p; j >= increment; j -= increment) {
				if (tmp < A[j - increment]) {
					A[j] = A[j - increment];
				} else {
					break;
				}
			}
			A[j] = tmp;
		}
	}
	return A[N / 2];
}

int main()
{
	double A[4] = { 3 , 12.3, 34, -5 };
	int N, i;

	//scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%f", &A[i]);
	printf("%.2f\n", Median(A, N));

	return 0;
}