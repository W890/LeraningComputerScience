#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int no, i,a;

	printf("������һ����������");
	scanf("%d", &no);

	i = 0;
	a = no;

	while (no > 0) {
		no /= 10;
		i++;
	}
	printf("%d��λ����%d:", a,i);

	return 0;
}