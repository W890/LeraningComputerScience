#include <math.h>
#include <stdio.h>
double dist(double x1, double y1, double x2, double y2)
{
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
int main()
{
	double x1, y1;
	double x2, y2;

	printf("求两点之间的距离。\n");
	printf("点1...X坐标");
	scanf("%1f", &x1);
	printf("      Y坐标");
	scanf("%1f", &y1);
	printf("点2...X坐标");
	scanf("%1f", &x2);
	printf("      Y坐标");
	scanf("%1f", &y2);

	printf("两点之间的距离为%f。\n", dist(x1, y1, x2, y2));

	return 0;
}
