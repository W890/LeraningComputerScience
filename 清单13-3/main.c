#define  _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdio.h>

int main()
{
	FILE* fp;
	time_t current = time(NULL);
	struct tm* timer = localtime(&current);

	if ((fp = fopen("dt_dat", "w")) == NULL)
		printf("\a文件打开失败。\n");
	else {
		printf("写出当前日期和时间。\n");
		fprintf(fp, "%d %d %d %d %d\n",
				timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday,
				timer->tm_hour, timer->tm_min, timer->tm_sec);
		fclose(fp);
	}
	return 0;
}