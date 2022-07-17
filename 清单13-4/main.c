#define  _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdio.h>

char date_file[] = "datetime.dat";

void get_data(void)
{
	FILE* fp;
	if ((fp = fopen(date_file, "r")) == NULL)
		printf("本程序第一次运行。\n");
	else {
		int year, month, day, h, m, s;

		fscanf(fp, "%d%d%d%d%d%d", &year, &month, &day, &h, &m, &s);
		printf("上一次运行是在%d年%d月%d日%d时%d分%d秒。\n", year, month, day, h, m, s);

		fclose(fp);
	}
}

void put_data(void)
{
	FILE* fp;
	time_t current = time(NULL);
	struct tm* timer = localtime(&current);

	if ((fp = fopen(date_file, "w")) == NULL)
		printf("\a文件打开失败。\n");
	else {
		fprintf(fp, "%d %d %d %d %d %d\n",
				timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday,
				timer->tm_hour, timer->tm_min, timer->tm_sec);
		fclose(fp);
	}
}
int main()
{
	get_data();
	put_data();

	return 0;
}