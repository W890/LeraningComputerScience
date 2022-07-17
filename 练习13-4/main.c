#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fp;
	char name[100];
	double height, weight;

	fp = fopen("hw.dat", "w");

	puts("输入名字，身高，体重：");
	
	fprintf(fp, "%-10s %5.1f %5.1f", name, height, weight);	
	fscanf(fp, "%s%lf%lf", &name, &height, &weight);
	
	fclose(fp);

	return 0;
}