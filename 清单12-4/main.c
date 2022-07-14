#include <stdio.h>
#define NAME_LEN 64
struct student {
	char name[NAME_LEN];
	int height;
	float weight;
	long schols;		
};
void hiroka(struct student* std)
{
	if (std->height < 180) std->height = 180;
	if (std->weight > 80) std->weight = 80;

	/*if ((*std).height < 180) (*std).height = 180;    (指针)
	if ((*std).weight > 80) (*std).weight = 80;*/
}
int main()
{
	struct student sanaka = { "Sanaka", 175, 62.5, 73000 };

	hiroka(&sanaka);

	printf("姓名 = %s\n", sanaka.name);
	printf("身高 = %d\n", sanaka.height);
	printf("体重 = %.lf\n", sanaka.weight);
	printf("奖学金 = %ld\n", sanaka.schols);

	return 0;
}