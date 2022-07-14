#include <stdio.h>
#include <string.h>

#define NUMBER 5
#define NAMW_LEN 64

typedef struct {
	char name[NAMW_LEN];
	int height;
	float weight;
	long schols;
}student;

void swap_student(student* x, student* y)
{
	student temp = *x;
	*x = *y;
	*y = temp;
}

void sort_by_heigit(student a[], int n)
{
	int i, j;

	for (i = 0; i < n - 1; i++) {
		for (j = n - 1; j > i; j--)
			if (a[j - i].height > a[j].height)
				swap_student(&a[j - 1], &a[j]);
	}
}

int main()
{
	int i;
	student std[] = {
		{"Sato", 178, 61.2, 80000},
		{"Sanaka", 175, 62.5, 73000},
		{"Takao", 173, 86.2, 0},
		{"Mike", 165, 72.3, 70000},
		{"Masaki", 179, 77.5, 70000},
	};

	for (i = 0; i < NUMBER; i++)
		printf("%-8s %6d%6.lf%7ld\n", std[i].name, std[i].height, std[i].weight, std[i].schols);

	sort_by_heigit(std, NUMBER);

	puts("\n°´Éí¸ßÅÅÐò¡£");
	for (i = 0; i < NUMBER; i++)
		printf("%-8s %6d%6.lf7;d\n", std[i].name, std[i].height, std[i].weight, std[i].schols);

	return 0;
}