#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define  NUMBER 5

int score[NUMBER];
int top(void); 
int main()
{
	extern int score[];
	int i;

	printf("请输入%d名学生的分数。\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("%d:", i + 1);
		scanf("%d", &score[i]);
	}
	printf("最高分 = %d\n", top());
	return (0);
}
int top(void)
{
	extern int score[];
	int i;
	int max = score[0];
	for (i = 1; i < NUMBER; i++)
		if (score[i] > max)
			max = score[i];
	return (max);
}