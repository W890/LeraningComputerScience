#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int month;

	printf("�������·ݣ�");
	scanf("%d", &month);

	if (month >=3 && month<=5 )
		printf("%d���Ǵ�����\n", month);
	else if (month >= 6 && month <= 8)
		printf("%d�����ļ���\n", month);
	else if (month >= 9 && month <= 11)
		printf("%d�����＾��\n", month);
	else if (month == 1 || month == 2 || month == 12)
		printf("%d���Ƕ�����\n", month);
	else
		printf("%d�²����� !!\a\n", month);

	return 0;
}