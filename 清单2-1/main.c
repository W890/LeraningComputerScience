#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int vx, vy;

	puts("����������������");
	printf("����vx:"); scanf("%d", &vx);
	printf("����vy:"); scanf("%d", &vy);

	printf("vx+vy=%d\n", vx + vy);
	printf("vx-vy=%d\n", vx - vy);
	printf("vx*vy=%d\n", vx * vy);
	printf("vx/vy=%d", vx / vy);
	printf("vx%%vy", vx % vy);

	return 0;
}