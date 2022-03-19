#include <stdio.h>
int main()
{
	int sato = 178;
	int sanaka = 175;
	int masaki = 179;

	int* isako, * hiroko;

	isako = &sato;
	hiroko = &masaki;

	printf("伊沙子喜欢的人的身高：%d\n", *isako);
	printf("洋子喜欢的人的身高：%d\n", *hiroko);

	isako = &sanaka;
	*hiroko = 180;

	putchar('\n');
	printf("佐藤的身高：%d\n", sato);
	printf("佐中的身高：%d\n", sanaka);
	printf("真崎的身高：%d\n", masaki);
	printf("伊沙子喜欢的人的身高：%d\n", *isako);
	printf("洋子喜欢的人的身高:%d\n", *hiroko);

	return 0;

}