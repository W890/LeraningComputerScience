#include <stdio.h>
void hiroko(int* height)
{
	if (*height < 160)
		*height = 180;
}
int main()
{
	int sato = 178;
	int sanaka = 175;
	int masaki = 179;

	hiroko(&masaki);

	printf("���ٵ����:%d\n", sato);
	printf("���е����:%d\n", sanaka);
	printf("��������:%d\n", masaki);

	return 0;
}