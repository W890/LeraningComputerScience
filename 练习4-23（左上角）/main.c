#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, j, len;

	puts("����ֱ�������Ͻǵĵ���ֱ�������Ρ�");
	printf("�̱ߣ�");
	scanf("%d", &len);

	for (i = len; i >= 0; i--) {
		for (j = 1; j <= i; j++) 
			for (j = 1; j <= i; j++)
				putchar('*');
			putchar('\n');
		
	}
	return 0;
}