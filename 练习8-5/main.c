#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
enum gender { Male, Female, gen_Invalid };
enum senson { Spring, Summer, Autumn, Winter, senson_Invalid };
void male(void)
{
	printf("ÄÐÐÔ\n");
}
void female(void)
{
	printf("Å®ÐÔ\n");
}
void spring(void)
{
	printf("´º¼¾\n");
}
void summer(void)
{
	printf("ÏÄ¼¾\n");
}
void autumn(void)
{
	printf("Çï¼¾\n");
}
void winter(void)
{
	printf("¶¬¼¾\n");
}
enum gender gender_select(void)
{
	int tmp;

	do {
		printf("0...ÐÛÐÔ/1...´ÆÐÔ/2...½áÊø:");
		scanf_s("%d", &tmp);
	} while (tmp<Male || tmp>gen_Invalid);

	return (enum gender)tmp;
}
enum senson senson_select(void)
{
	int tmp;

	do {
		printf("0...´º¼¾/1...ÏÄ¼¾/2...Çï¼¾/3...¶¬¼¾/4...½áÊø£º");
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
		printf("Ñ¡Ôñ²Ù×÷Ïî¡¾0...ÐÔ±ð/1...¼¾½Ú¡¿£º");
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