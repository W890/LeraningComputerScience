#include <stdio.h>

int main()
{
	FILE* fp;
	double pi = 3.14159265389879323846;

	printf("�ӱ���pi�õ���Բ����Ϊ%23.21f��\n", pi);

	if ((fp = fopen("PI.bin", "wb")) == NULL)
		printf("\a�ļ���ʧ�ܡ�\n");
	else {
		fwrite(&pi, sizeof(double), 1, fp);
		fclose(fp);
	}

	if ((fp = fopen("PI.bin", "rb")) == NULL)
		printf("\a�ļ���ʧ�ܡ�\n");
	else {
		fread(&pi, sizeof(double), 1, fp);
		printf("���ļ���ȡ��Բ����Ϊ%23.21f��\n", pi);
		fclose(fp);
	}
	return 0;
}