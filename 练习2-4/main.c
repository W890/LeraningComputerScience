#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a1, a2, a3, a4, a5, a6, a7, a8;
	double b1, b2, b3, b4, b5, b6, b7, b8;

	a1 = 5 / 2;
	a2 = 5.0 / 2.0;
	a3 = 5.0 / 2;
	a4 = 5 / 2.0;
	a5 = 5 * 2;
	a6 = 5.0 * 2.0;
	a7 = 5.0 * 2;
	a8 = 5 * 2.0;

	b1 = 5 / 2;
	b2 = 5.0 / 2.0;
	b3 = 5.0 / 2;
	b4 = 5 / 2.0;
	b5 = 5 * 2;
	b6 = 5.0 * 2.0;
	b7 = 5.0 * 2;
	b8 = 5 * 2.0;

	printf("a1=%d\n", a1);
	printf("a2=%d\n", a2);
	printf("a3=%d\n", a3);
	printf("a4=%d\n", a4);
	printf("a5=%d\n", a5);
	printf("a6=%d\n", a6);
	printf("a7=%d\n", a7);
	printf("a8=%d\n\n", a8);

	printf("b1=%f\n", b1);
	printf("b2=%f\n", b2);
	printf("b3=%f\n", b3);
	printf("b4=%f\n", b4);
	printf("b5=%f\n", b5);
	printf("b6=%f\n", b6);
	printf("b7=%f\n", b7);
	printf("b8=%f\n", b8);

	return 0;
}