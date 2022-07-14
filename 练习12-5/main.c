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
	printf("��ǰλ�ã�(%.2f,%.2f\n", c.pt.x, c.pt.y);
	printf("ʣ��ȼ�ϣ�%.2f��\n", c.fuel);
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
		printf("��ѡ����з����� [����Ŀ�ĵ�����---1/����X�����Y����---0] ");
		scanf("%d", &num);
		if (num == 1) {
			printf("����������[yes---1/no---0] :");
			scanf("%d", &select);
			if (select != 1) break;
			printf("Ŀ�ĵ�X�����꣺");
			scanf("%lf", &dest.x);
			printf("Ŀ�ĵ�Y�����꣺");
			scanf("%lf", &dest.y);
			if (!move(&mycar, dest))
				puts("\aȼ�ϲ����޷���ʻ��");
		} else {
			printf("����������[yes---1/no---0] :");
			scanf("%d", &select);
			if (select != 1) break;
			printf("Ŀ�ĵ�X�ľ��룺");
			scanf("%lf", &x);
			printf("Ŀ�ĵ�Y�ľ��룺");
			scanf("%lf", &y);
			dest.x += x;
			dest.y += y;
			if (!move(&mycar, dest))
				puts("\aȼ�ϲ����޷���ʻ��");
		}
	}
	return 0;
}