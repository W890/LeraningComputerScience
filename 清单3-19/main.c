#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int no;

	printf("������һ��������");
	scanf("%d", &no);

	switch (no % 3) {
	case 0: puts("�������ܱ�3������");
	case 1: puts("��������3��������1��");
	case 2: puts("��������3��������2��");
	}

	return 0;
}