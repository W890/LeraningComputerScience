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
    printf("请输入学生姓名:");
    scanf("%s", sanaka.name);
    printf("\n");
    printf("请输入学生身高:");
    scanf("%d", &(sanaka.height));
    printf("\n");
    printf("请输入学生体重:");
    scanf("%f", &(sanaka.weight));
    printf("\n");
    printf("请输入学生奖学金:");
    scanf("%ld", &(sanaka.schols));
    printf("\n");
    hiroko(&sanaka);
    printf("姓名 = %s\n", sanaka.name);
    printf("身高 = %d\n", sanaka.height);
    printf("体重 = %.lf\n", sanaka.weight);
    printf("奖学金 = %ld\n", sanaka.schols);

}