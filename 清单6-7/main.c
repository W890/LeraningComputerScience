#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void put_stars(int no)
{
	while (no-- > 0)
		putchar('*');
}

int main()
{
	int i, len;

	printf("����һ��ֱ�������·��ĵ���ֱ�������Ρ�\n��");
	printf("�̱ߣ�");
	scanf("%d", &len);

	for (i = 1; i <= len; i++) {
		put_stars(i);
		putchar('\n');
	}
	return (0);
}