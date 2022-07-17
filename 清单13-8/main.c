#include <stdio.h>

int main()
{
	FILE* fp;
	double pi = 3.14159265358979323846;

	printf("从变量pi得到的圆周率为%23.21f。\n", pi);

	if ((fp = fopen("PI.txt", "w")) == NULL)
		printf("\a文件打开失败。\n");
	else {
		fprintf(fp, "%f", pi);
		fclose(fp);
	}
	if ((fp = fopen("PI.txt", "r")) == NULL)
		printf("\a文件打开失败。\n");
	else {
		fscanf(fp, "%lf", &pi);
		printf("从文件读取的圆周率为%23.21f。\n", pi);
		fclose(fp);
	}
	return 0;
}