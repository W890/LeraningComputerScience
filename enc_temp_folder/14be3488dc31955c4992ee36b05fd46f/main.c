#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

#define sqr(n) ((n) * (n))

typedef struct {
	double x;
	double y;
} point;

typedef struct {
	point pt;
	double fuel;
} car;

double distance_of(point pa, point pb)
{
	return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}

void put_info(car c)
{
	printf("当前位置：(%.2f,%.2f\n", c.pt.x, c.pt.y);
	printf("剩余燃料：%.2f升\n", c.fuel);
}

int move(car* c, point dest)
{
	double d = distance_of(c->pt, dest);
	if (d > c->fuel)
		return 0;
	c->pt = dest;
	c->fuel -= d;

	return 1;
}

int main()
{
	car mycar = { {0.0, 0.0}, 90.0 };
	point dest = { 0.0, 0.0 };
	while (1) {
		int select;
		int num;
		double x, y;
		put_info(mycar);
		printf("请选择出行方法： [输入目的地坐标---1/输入X方向和Y方向---0] ");
		scanf("%d", &num);
		if (num == 1) {
			printf("开动汽车吗[yes---1/no---0] :");
			scanf("%d", &select);
			if (select != 1) break;
			printf("目的地X的坐标：");
			scanf("%lf", &dest.x);
			printf("目的地Y的坐标：");
			scanf("%lf", &dest.y);
			if (!move(&mycar, dest))
				puts("\a燃料不足无法行驶。");
		} else {
			printf("开动汽车吗[yes---1/no---0] :");
			scanf("%d", &select);
			if (select != 1) break;
			printf("目的地X的距离：");
			scanf("%lf", &x);
			printf("目的地Y的距离：");
			scanf("%lf", &y);
			dest.x += x;
			dest.y += y;
			if (!move(&mycar, dest))
				puts("\a燃料不足无法行驶。");
		}
	}
	return 0;
}