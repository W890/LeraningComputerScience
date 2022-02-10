#include <stdio.h> 
int fx = 0;
void func(void)
{
	static int sx = 0;
	int        ax = 0;

	printf("%3d%3d%3d\n", ax++, sx++, fx++);
}
int main()
{
	int i;

	puts("ax sx fx");
	puts("----------");
	for (i = 0; i < 10; i++)
		func();
	puts("----------");

	return 0;
}