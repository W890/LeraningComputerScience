#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	double vx,vy;

	puts("请输入两个整数。");
	printf("实数vx:"); scanf("%lf", &vx);
	printf("实数vy:"); scanf("%lf", &vy);

	printf("vx+vy=%f\n", vx + vy);
	printf("vx-vy=%f\n", vx - vy);
	printf("vx*vy=%f\n", vx * vy);
	printf("vx/vy=%f\n", vx / vy);

	return 0;
}