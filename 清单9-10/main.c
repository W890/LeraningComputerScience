#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void str_dcount(const char s[], int cnt[])
{
	int i = 0;
	while (s[i]) {
		if (s[i] >= '0' && s[i] <= '9')
			cnt[s[i] - '0']++;
		i++;
	}
}
int main()
{
	int i;
	int dcnt[10] = { 0 };
	char str[128];

	printf("�������ַ�����");
	scanf("%s", str);

	str_dcount(str, dcnt);

	puts("�����ַ��ĳ��ִ���");
	for (i = 0; i < 10; i++)
		printf("'%d':%d\n", i, dcnt[i]);

	return 0;
}