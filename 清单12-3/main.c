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

	
	printf("���� = %s\n", takao.name);
	printf("��� = %d\n", takao.height);
	printf("���� = %.lf\n", takao.weight);
	printf("��ѧ�� = %ld\n", takao.schols);

	return 0;
}