#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct node//定义链表类型
{
    int data;//数据域
    struct node* next;//指针域
};
int main()
{
    struct node* head, * p, * tail;//定义头指针、游动指针和尾指针
    head = (struct node*)malloc(sizeof(struct node));
    head->next = NULL;
    tail = head;//建立只包含头结点的空链表，头指针、尾指针均指向头结点。初始化tail指向head，tail指针总是只想最后一个结点。
    int n, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)//循环建立新结点p，并插入到尾结点tail的后面
    {
        p = (struct node*)malloc(sizeof(struct node));//为新结点分配存储空间
        scanf("%d", &p->data);//读入数据，赋给新结点数据域
        p->next = NULL;//让p的next等于空，让新结点指针域指向原来头结点后面的结点
        tail->next = p;//让头结点next域指向新结点p
        tail = p;
    }
    p = head->next;//让p指向第一个结点
    while (p != NULL)//当p为空时跳出循环
    {
        printf("%d ", p->data);
        p = p->next;
    }
    return 0;


}
