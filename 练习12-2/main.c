#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NAME_LEN 64
typedef struct student
{
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
} Student;
void hiroko(Student* std)
{
    if (std->height < 180) std->height = 180;
    if (std->weight > 80) std->weight = 80;
}
int main()
{
    Student sanaka;
    printf("������ѧ������:");
    scanf("%s", sanaka.name);
    printf("\n");
    printf("������ѧ�����:");
    scanf("%d", &(sanaka.height));
    printf("\n");
    printf("������ѧ������:");
    scanf("%f", &(sanaka.weight));
    printf("\n");
    printf("������ѧ����ѧ��:");
    scanf("%ld", &(sanaka.schols));
    printf("\n");
    hiroko(&sanaka);
    printf("���� = %s\n", sanaka.name);
    printf("��� = %d\n", sanaka.height);
    printf("���� = %.lf\n", sanaka.weight);
    printf("��ѧ�� = %ld\n", sanaka.schols);

}