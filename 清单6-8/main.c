#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void put_chars(int ch, int n)
{
	while (n-- > 0)
		putchar(ch);
}
int main()
{
	int i, len;

	printf("����һ��ֱ�������½ǵĵ���ֱ�������Ρ�\n");
	printf("�̱ߣ�");
	scanf("%d", &len);

	for (i = 1; i <= len; i++) {
		put_chars(' ', len - i);
		put_chars('*', i);
		putchar('\n');
	}
	return (0);
}