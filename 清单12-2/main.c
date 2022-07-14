#include <stdint.h>
#include <string.h>

#define NAME_LEN 64

struct student {
	char name[NAME_LEN];
	int height;
	float weight;
	long schols;
};
int main()
{
	struct student sanaka;

	strcpy(sanaka.name, "Sanaka");
	sanaka.height = 175;
	sanaka.weight = 62.5;
	sanaka.schols = 73000;

	printf("姓名 = %s\n", sanaka.name);
	printf("身高 = %d\n", sanaka.height);
	printf("体重 = %。1f\n", sanaka.weight);
	printf("奖学金 = %1d\n", sanaka.schols);

	return 0;
 }