#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fp;
	int ninzu = 0;
	char name[100];
	double height, weight;
	double hsum = 0.0;
	double wsum = 0.0;

	if ((fp = fopen("hw.dat", "r")) == NULL)
		printf("\a文件打开失败。\n");
	else {
		while (fscanf(fp, "%s%lf%lf", name, &height, &weight) == 3)
		{
			printf("%-10s %5.1f %5.1f\n", name, height, weight);
			ninzu++;
			hsum += height;
			wsum += weight;
		}
		printf("--------------------\n");
		printf("平均 %5.1f %5.1f\n", hsum / ninzu, wsum / ninzu);
		fclose(fp);
	}
	return 0;
}