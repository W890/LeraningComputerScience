#include <stdio.h>
#define NAME_LEN 64
typedef struct student {
	char name[NAME_LEN];
	int height;
	float weight;
	long schols;
} student;
void hiroka(student* std)
{
	if (std->height < 180) std->height = 180;
	if (std->weight > 80) std->weight = 80;

	/*if ((*std).height < 180) (*std).height = 180;    (ָ��)
	if ((*std).weight > 80) (*std).weight = 80;*/
}
int main()
{
	student sanaka = { "Sanaka", 175, 62.5, 73000 };

	hiroka(&sanaka);

	printf("���� = %s\n", sanaka.name);
	printf("��� = %d\n", sanaka.height);
	printf("���� = %.1f\n", sanaka.weight);
	printf("��ѧ�� = %ld\n", sanaka.schols);

	return 0;
}