#define  _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdio.h>

char date_file[] = "datetime.dat";

void get_data(void)
{
	struct tm timer;
	FILE* fp;
	if ((fp = fopen(date_file, "r")) == NULL)
		printf("�������һ�����С�\n");
	else {
		fread(&timer, sizeof(timer), 1, fp);
		printf("��һ����������%d��%d��%d��%dʱ%d��%d�롣\n", timer.tm_year + 1900, timer.tm_mon + 1, timer.tm_mday, timer.tm_hour,
			                                                timer.tm_min, timer.tm_sec);

		fclose(fp);
	}
}

void put_data(void)
{
	FILE* fp;
	time_t current = time(NULL);
	struct tm* timer = localtime(&current);

	if ((fp = fopen(date_file, "w")) == NULL)
		printf("\a�ļ���ʧ�ܡ�\n");
	else {
	fwrite(timer, sizeof(struct tm), 1, fp);
	fclose(fp);
	}
}
int main()
{
	get_data();
	put_data();

	return 0;
}