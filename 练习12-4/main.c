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
		printf("第%d名同学姓名：", i + 1);		
		scanf("%s", std[i].name);
		printf("第%d名同学身高：", i + 1);		
		scanf("%d", &std[i].height);
		printf("第%d名同学体重：", i + 1);		
		scanf("%f", &std[i].weight);
		printf("第%d名同学奖学金：", i + 1);	
		scanf("%ld", &std[i].schols);
		putchar('\n');
	}

	do {
		printf("请选择操作方式：【0...按照身高排序/1...按照名字的顺序排序】");
		scanf("%d", &j);
	} while (j < 0 || j>1);
	if (j == 0) {
		sort_by_height(std, NUMBER);

		puts("\n按身高排序。");
		for (i = 0; i < NUMBER; i++)
			printf("%-8s %6d%6.lf%7ld\n", std[i].name, std[i].height, std[i].weight, std[i].schols);
	} else {
		sort_by_name(std, NUMBER);

		puts("\n按身高排序。");
		for (i = 0; i < NUMBER; i++)
			printf("%-8s %6d%6.lf%7ld\n", std[i].name, std[i].height, std[i].weight, std[i].schols);
	}

	return 0;
}