#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define NUMBER 5
#define NAMW_LEN 64

typedef struct {
	char name[NAMW_LEN];
	int height;
	float weight;
	long schols;
}Student;

void swap_Student(Student* x, Student* y)
{
	Student temp = *x;
	*x = *y;
	*y = temp;
}

void sort_by_height(Student a[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
		for (j = n - 1; j > i; j--)
			if (a[j - 1].height > a[j].height)
				swap_Student(&a[j - 1], &a[j]);
}

void sort_by_name(Student a[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
		for (j = n - 1; j > i; j--)
			if (a[j - 1].name > a[j].name)
				swap_Student(&a[j - 1], &a[j]);
}

int main()
{
	int i, j;
	Student std[NUMBER];

	for (i = 0; i < NUMBER; i++) {
		printf("��%d��ͬѧ������", i + 1);		
		scanf("%s", std[i].name);
		printf("��%d��ͬѧ��ߣ�", i + 1);		
		scanf("%d", &std[i].height);
		printf("��%d��ͬѧ���أ�", i + 1);		
		scanf("%f", &std[i].weight);
		printf("��%d��ͬѧ��ѧ��", i + 1);	
		scanf("%ld", &std[i].schols);
		putchar('\n');
	}

	do {
		printf("��ѡ�������ʽ����0...�����������/1...�������ֵ�˳������");
		scanf("%d", &j);
	} while (j < 0 || j>1);
	if (j == 0) {
		sort_by_height(std, NUMBER);

		puts("\n���������");
		for (i = 0; i < NUMBER; i++)
			printf("%-8s %6d%6.lf%7ld\n", std[i].name, std[i].height, std[i].weight, std[i].schols);
	} else {
		sort_by_name(std, NUMBER);

		puts("\n���������");
		for (i = 0; i < NUMBER; i++)
			printf("%-8s %6d%6.lf%7ld\n", std[i].name, std[i].height, std[i].weight, std[i].schols);
	}

	return 0;
}