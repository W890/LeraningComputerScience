#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int no;

	printf("������һ��������");
	scanf("%d", &no);

	switch (no % 3) {
	case 0: puts("�������ܱ�3������");       break;
	case 1: puts("��������3��������1��");		break;
	case 2: puts("��������3��������2��");		break;
	}

	return 0;
}