#include <stdio.h>
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void sort4(int* n1, int* n2, int* n3) {
	if (*n1 > *n2)
		swap(n1, n2);
	if (*n1 > *n3)
		swap(n1, n3);
	if (*n2 > *n3)
		swap(n2, n3);
}
void sort3(int* n1, int* n2, int* n3) {
	int temp;
	if (*n1 > *n2) {
		temp = *n1;
		*n1 = *n2;
		*n2 = temp;
	}
	if (*n1 > *n3) {
		temp = *n1;
		*n1 = *n3;
		*n3 = temp;
	}
	if (*n2 > *n3) {
		temp = *n2;
		*n2 = *n3;
		*n3 = temp;
	}
}
int main()
{
	int n1, n2, n3;

	puts("请输入三个整数：");
	scanf("%d %d %d", &n1, &n2, &n3);

	sort4(&n1, &n2, &n3);

	printf("三个数按升序排列后的值：%d %d %d", n1, n2, n3);

	return 0;
}