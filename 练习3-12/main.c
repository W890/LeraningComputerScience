#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("������һ��������");
	scanf("%d", &no);

	switch (no % 2) {
	case 1: puts("��������������"); break;
	default: puts("��������ż����");
	}
	return 0;
}