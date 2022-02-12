#include <stdio.h>
#include <math.h>

int main()
{
	double x;

	printf("请输入正方形面积x=");   
	scanf_s("%lf", &x);

	printf("正方形的面积为%f\n", sqrt(x));
	return 0;
}