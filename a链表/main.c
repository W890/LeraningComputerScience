#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct node//������������
{
    int data;//������
    struct node* next;//ָ����
};
int main()
{
    struct node* head, * p, * tail;//����ͷָ�롢�ζ�ָ���βָ��
    head = (struct node*)malloc(sizeof(struct node));
    head->next = NULL;
    tail = head;//����ֻ����ͷ���Ŀ�����ͷָ�롢βָ���ָ��ͷ��㡣��ʼ��tailָ��head��tailָ������ֻ�����һ����㡣
    int n, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)//ѭ�������½��p�������뵽β���tail�ĺ���
    {
        p = (struct node*)malloc(sizeof(struct node));//Ϊ�½�����洢�ռ�
        scanf("%d", &p->data);//�������ݣ������½��������
        p->next = NULL;//��p��next���ڿգ����½��ָ����ָ��ԭ��ͷ������Ľ��
        tail->next = p;//��ͷ���next��ָ���½��p
        tail = p;
    }
    p = head->next;//��pָ���һ�����
    while (p != NULL)//��pΪ��ʱ����ѭ��
    {
        printf("%d ", p->data);
        p = p->next;
    }
    return 0;


}
