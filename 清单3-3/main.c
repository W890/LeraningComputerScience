#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int no;

	printf("������һ������:");
	scanf("%d", &no);

	if (no % 5)
		puts("���������ܱ�5������");
	else
		puts("�������ܱ�5������");
	
		return 0;
}