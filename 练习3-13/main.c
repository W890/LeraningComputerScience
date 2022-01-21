#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int month = 0;
	printf("ÇëÊäÈëÔÂ·İ£º\n");
	scanf("%d", &month);

	switch (month) {
	case 1:
	case 2:
	case 3:printf("´º"); break;
	case 4:
	case 5:
	case 6: printf("ÏÄ"); break;
	case 7:
	case 8:
	case 9: printf("Çï"); break;
	case 10:
	case 11:
	case 12: printf("¶¬"); break;
	default:
	{
		printf("ÊäÈë´íÎó");
	}
	}
	return 0;
}