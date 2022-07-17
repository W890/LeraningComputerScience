#include <stdio.h>

int main()
{
	FILE* fp;
	double pi = 3.14159265389879323846;

	printf("从变量pi得到的圆周率为%23.21f。\n", pi);

	if ((fp = fopen("PI.bin", "wb")) == NULL)
		printf("\a文件打开失败。\n");
	else {
		fwrite(&pi, sizeof(double), 1, fp);
		fclose(fp);
	}

	if ((fp = fopen("PI.bin", "rb")) == NULL)
		printf("\a文件打开失败。\n");
	else {
		fread(&pi, sizeof(double), 1, fp);
		printf("从文件读取的圆周率为%23.21f。\n", pi);
		fclose(fp);
	}
	return 0;
}