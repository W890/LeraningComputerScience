#include <stdio.h>

int main()
{
	float a;
	double b;
	long double c;

	printf("a=");   
	scanf_s("%f", &a);
	printf("b=");   
	scanf_s("%lf", &b);
	printf("c=");   
	scanf_s("%lf", &c);

	printf("a=%f\n", a);
	printf("b=%f\n", b);
	printf("c=%lf\n", c);

	return 0;
}