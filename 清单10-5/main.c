#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void sum_diff(int n1, int n2, int* sum, int* diff)
{
	*sum = n1 + n2;
	*diff = (n1 > n2) ? n1 - n2 : n2 - n1;
}
int main()
{
	int na, nb;
	int wa = 0, sa = 0;

	puts("����������������");
	printf("����A��");
	scanf("%d", &na);
	printf("����B:");
	scanf("%d", &nb);

	sum_diff(na, nb, &wa, &sa);
	
	printf("����ֻ��Ϊ%d��֮��Ϊ%d��\n", wa, sa);

	return 0;
}