#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
struct xyz
{
	int x;
	long y;
	double z;
};
struct xyz scan_xyz(int x, long y, double z)
{
	struct xyz temp;
	temp.x = x;
	temp.y = y;
	temp.z = z;
	return temp;
}
int main()
{
	int x;
	long y;
	double z;
	struct xyz p;

	printf("������x:");
	scanf("%d", &x);
	printf("������y:");
	scanf("%1d", &y);
	printf("������z:");
	scanf("%lf", &z);
	p = scan_xyz(x, y, z);
	printf("x = %d\n", p.x);
	printf("y = %ld\n", p.y);
	printf("z = %lf\n", p.z);

	return 0;
}