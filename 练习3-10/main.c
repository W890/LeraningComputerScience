#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int A, B, C;
	
	printf("����������������\n");
	printf("����A:");
	scanf("%d", &A);
	printf("����B��");
	scanf("%d", &B);
	printf("����C��");
	scanf("%d", &C);

	if (A == B && B == C)
	printf("����ֵ����ȡ�");
	else if (A == B || B == C ||A == C)
	printf("����ֵ����ȡ�");
	else
		printf("����ֵ������ͬ��");

	return 0;
}