#include <stdio.h>

int main()
{
	FILE* fp;
	double pi = 3.14159265358979323846;

	printf("�ӱ���pi�õ���Բ����Ϊ%23.21f��\n", pi);

	if ((fp = fopen("PI.txt", "w")) == NULL)
		printf("\a�ļ���ʧ�ܡ�\n");
	else {
		fprintf(fp, "%f", pi);
		fclose(fp);
	}
	if ((fp = fopen("PI.txt", "r")) == NULL)
		printf("\a�ļ���ʧ�ܡ�\n");
	else {
		fscanf(fp, "%lf", &pi);
		printf("���ļ���ȡ��Բ����Ϊ%23.21f��\n", pi);
		fclose(fp);
	}
	return 0;
}