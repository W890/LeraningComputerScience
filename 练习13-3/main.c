#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUMBER 6

typedef struct {
	char name[100];
	double height;
	double weight;
} student;

void swap_student(student* x, student* y)
{
	student temp = *x;
	*x = *y;
	*y = temp;
}

void sotr_by_height(student a[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = n - 1; j > i; j--)
			if (a[j - 1].height > a[j].height)
				swap_student(&a[j - 1], &a[j]);
	}
}

int main()
{
	FILE* fp;
	int ninzu = 0;
	double hsum = 0.0;
	double wsum = 0.0;
	student std[NUMBER];

	if ((fp = fopen("hw.dat", "r")) == NULL)
		printf("\a文件打开失败。\n");
	else {
		while (fscanf(fp, "%s%lf%lf", std[ninzu].name, &std[ninzu].height, &std[ninzu].weight) == 3)
		{
			ninzu++;
			hsum += std[ninzu].height;
			wsum += std[ninzu].weight;
		}

		sotr_by_height(std, NUMBER);
		for (ninzu = 0; ninzu < NUMBER; ninzu++)
			printf("%-10s %5.1f %5.1f\n", std[ninzu].name, std[ninzu].height, std[ninzu].weight);
		printf("--------------------\n");
		printf("平均 %5.1f %5.1f\n", hsum / ninzu, wsum / ninzu);
		fclose(fp);
	}
	return 0;
}