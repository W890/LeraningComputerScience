#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#define NUMBER 5
int max_of(int v[], int n)
{
	int i;
	int max = v[0];

	for (i = 1; i < n; i++)
		if (v[i] > max)
			max = v[i];
	return (max);
}
int main()
{
	int i;
	int eng[NUMBER];
	int mat[NUMBER];
	int max_e, max_m;

	printf("������%d��ѧ���ķ�����\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("[%d]Ӣ��:", i + 1); 
		scanf("%d", &eng[i]);
		printf("   ��ѧ:");       
		scanf("%d", &mat[i]);
	}
	max_e = max_of(eng, NUMBER);
	max_m = max_of(mat, NUMBER);
	printf("Ӣ�����߷�=%d\n", max_e);
	printf("��ѧ����߷�=%d\n", max_m);

	return (0);
}
