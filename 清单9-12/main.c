#include <stdio.h>
void put_strary(const char s[][6], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("s[%d] = \"%s\"\n", i, s[i]);

}
int main()
{
	char cs[][6] = { "Turbo", "NA", "DOHC" };

	put_strary(cs, 3);

	return 0;
}