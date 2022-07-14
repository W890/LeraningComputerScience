#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

#define sqr(n) ((n) * (n))

typedef struct {
	double x;
	double y;
} point;

double distance_of(point pa, point pb)
{
	return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}

int main()
{
	point crnt, dest;

	printf("当前地点的X坐标：");
	scanf("%lf", &crnt.x);
	printf("当前地点的Y坐标：");
	scanf("%lf", &crnt.y);
	printf("目的地的X坐标：");
	scanf("%lf", &dest.x);
	printf("目的地的Y坐标：");
	scanf("%lf", &dest.y);

	printf("到目的地的距离为%.2f。\n", distance_of(crnt, dest));

	return 0;
}