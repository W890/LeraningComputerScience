#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
enum animal {Dog, Cat, Monkey, Invalid};
void dog(void)
{
	puts("ÍôÍô!!");
}
void cat(void)
{
	puts("ß÷~£¡£¡");
}
void monkey(void)
{
	puts("ßóßó£¡£¡");
}
enum animal select(viod)
{
	int tmp;
	do {
		printf("0...¹· 1...Ã¨ 2...ºï 3...½áÊø:");
		scanf("%d", &tmp);
	} while (tmp < Dog || tmp > Invalid);
	return tmp;
}
int main()
{
	enum animal selected;
	do {
		switch (selected = select()) {
		case Dog	:	dog(); break;
		case Cat	:	cat(); break;
		case Monkey	:	monkey(); break;
		}
	} while (selected != Invalid);
	return 0;
}
