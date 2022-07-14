#include <stdio.h>
#define NAME_LEN 64

struct student {
	char name[NAME_LEN];
	int height;
	float weight;
	long schols;
};
int main()
{
	struct student takao = { "Takao", 173, 86.2 };


	printf("姓名地址 %p\n", &takao.name);
	printf("身高地址 %p\n", &takao.height);
	printf("体重地址 %p\n", &takao.weight);
	printf("奖学金地址 %p\n", &takao.schols);

	return 0;
}