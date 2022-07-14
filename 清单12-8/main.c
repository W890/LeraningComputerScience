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

	printf("��ǰ�ص��X���꣺");
	scanf("%lf", &crnt.x);
	printf("��ǰ�ص��Y���꣺");
	scanf("%lf", &crnt.y);
	printf("Ŀ�ĵص�X���꣺");
	scanf("%lf", &dest.x);
	printf("Ŀ�ĵص�Y���꣺");
	scanf("%lf", &dest.y);

	printf("��Ŀ�ĵصľ���Ϊ%.2f��\n", distance_of(crnt, dest));

	return 0;
}