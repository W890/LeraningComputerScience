#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
enum gender { Male, Female, gen_Invalid };
enum senson { Spring, Summer, Autumn, Winter, senson_Invalid };
void male(void)
{
	printf("����\n");
}
void female(void)
{
	printf("Ů��\n");
}
void spring(void)
{
	printf("����\n");
}
void summer(void)
{
	printf("�ļ�\n");
}
void autumn(void)
{
	printf("�＾\n");
}
void winter(void)
{
	printf("����\n");
}
enum gender gender_select(void)
{
	int tmp;

	do {
		printf("0...����/1...����/2...����:");
		scanf_s("%d", &tmp);
	} while (tmp<Male || tmp>gen_Invalid);

	return (enum gender)tmp;
}
enum senson senson_select(void)
{
	int tmp;

	do {
		printf("0...����/1...�ļ�/2...�＾/3...����/4...������");
		scanf_s("%d", &tmp);
	} while (tmp<Spring || tmp>senson_Invalid);

	return (enum senson)tmp;
}
int main()
{
	enum gender gender_selected;
	enum senson senson_selected;
	int i;

	do {
		printf("ѡ������0...�Ա�/1...���ڡ���");
		scanf_s("%d", &i);
	} while (i < 0 || i>1);

	if (i == 0) {
		do {
			switch (gender_selected = gender_select()) {
			case Male:male();  break;
			case Female:female();  break;
			}
		} while (gender_selected != gender_select());
	} else {
		do {
			switch (senson_selected = senson_select()) {
			case Spring:spring();  break;
			case Summer:summer();  break;
			case Autumn:autumn();  break;
			case Winter:winter();  break;
			}
		} while (senson_selected != senson_select());
	}

	return 0;
}