#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int no;

	do {
		printf("������һ����������");
		scanf("%d", &no);
		if (no <= 0)
			puts("\a�벻Ҫ�������������");
	} while (no <= 0);
	
	printf("������������ʾ�Ľ���ǣ�");
	while (no > 0) {
		printf("%d", no % 10);
		no /= 10;
	}
	puts("��");

	return 0;
}