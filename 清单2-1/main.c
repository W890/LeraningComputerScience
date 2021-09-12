#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int vx, vy;

	puts("请输入两个整数。");
	printf("整数vx:"); scanf("%d", &vx);
	printf("整数vy:"); scanf("%d", &vy);

	printf("vx+vy=%d\n", vx + vy);
	printf("vx-vy=%d\n", vx - vy);
	printf("vx*vy=%d\n", vx * vy);
	printf("vx/vy=%d", vx / vy);
	printf("vx%%vy", vx % vy);

	return 0;
}