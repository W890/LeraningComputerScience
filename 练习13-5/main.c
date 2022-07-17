#define  _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdio.h>

char date_file[] = "datetime.dat";
char mood[128];

void get_data(void)
{
	FILE* fp;
	if ((fp = fopen(date_file, "r")) == NULL) {
		printf("�������һ�����С�\n");
		printf("��ǰ�����飺");
		scanf("%s", mood);
	}
	else {
		int year, month, day, h, m, s;

		fscanf(fp, "%d%d%d%d%d%d%s", &year, &month, &day, &h, &m, &s, &mood);
		printf("��һ����������%d��%d��%d��%dʱ%d��%d��,����%s\n", year, month, day, h, m, s, mood);
		printf("��ǰ������:");
		scanf("%s", mood);

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
		fprintf(fp, "%d %d %d %d %d %d\n",
				timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday,
				timer->tm_hour, timer->tm_min, timer->tm_sec);
		fprintf(fp, "%s", mood);
		fclose(fp);
	}
}
int main()
{
	get_data();
	put_data();

	return 0;
}