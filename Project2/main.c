#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node* next;
}Node;

typedef struct List {
	int len;
	Node* head;
	Node* tail;
}List;

void Nodecreate(List *l, int n)
{
	for (int i = 1; i <= n; i++) {	
		Node*  p = malloc(sizeof(struct Node));	
		p->data = i;
		p->next = NULL;
		if (l->tail) {
			l->tail->next = p;
			l->tail = p;
		} else {
			l->head = p;
			l->tail = p;
		}
	}
	l->tail->next = l->head;
	return;
}

Node* removemok(List* l, int n)
{
	Node* p = l->head;
	while (n-- != 1) {
		p = p->next;
		Node* q = p->next->next;
		free(p->next);
		p->next = q;
		p = q;
	} 
	return p;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	List* p = malloc(sizeof(List));
	p->head = NULL;
	p->tail = NULL;
	p->len = 0;
	Nodecreate(p, n);
	Node*m = removemok(p, n);

	printf("%d", m->data);
	
}