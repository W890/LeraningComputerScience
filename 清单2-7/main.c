#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	double vx,vy;

	puts("����������������");
	printf("ʵ��vx:"); scanf("%lf", &vx);
	printf("ʵ��vy:"); scanf("%lf", &vy);

	printf("vx+vy=%f\n", vx + vy);
	printf("vx-vy=%f\n", vx - vy);
	printf("vx*vy=%f\n", vx * vy);
	printf("vx/vy=%f\n", vx / vy);

	return 0;
}