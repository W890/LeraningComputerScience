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


	printf("������ַ %p\n", &takao.name);
	printf("��ߵ�ַ %p\n", &takao.height);
	printf("���ص�ַ %p\n", &takao.weight);
	printf("��ѧ���ַ %p\n", &takao.schols);

	return 0;
}