#include <stdio.h>
int main()
{
	int sato = 178;
	int sanaka = 175;
	int masaki = 179;

	int* isako, * hiroko;

	isako = &sato;
	hiroko = &masaki;

	printf("��ɳ��ϲ�����˵���ߣ�%d\n", *isako);
	printf("����ϲ�����˵���ߣ�%d\n", *hiroko);

	isako = &sanaka;
	*hiroko = 180;

	putchar('\n');
	printf("���ٵ���ߣ�%d\n", sato);
	printf("���е���ߣ�%d\n", sanaka);
	printf("�������ߣ�%d\n", masaki);
	printf("��ɳ��ϲ�����˵���ߣ�%d\n", *isako);
	printf("����ϲ�����˵����:%d\n", *hiroko);

	return 0;

}