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

	/*if ((*std).height < 180) (*std).height = 180;    (ָ��)
	if ((*std).weight > 80) (*std).weight = 80;*/
}
int main()
{
	struct student sanaka = { "Sanaka", 175, 62.5, 73000 };

	hiroka(&sanaka);

	printf("���� = %s\n", sanaka.name);
	printf("��� = %d\n", sanaka.height);
	printf("���� = %.lf\n", sanaka.weight);
	printf("��ѧ�� = %ld\n", sanaka.schols);

	return 0;
}