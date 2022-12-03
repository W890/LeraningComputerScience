#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct Node {
	int val;
	struct Node* next;
};


int main()
{
	struct Node* head = NULL, * tail = NULL, *q = NULL, *m = NULL;
	int n;
	
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		//if (n != -1) {
		struct Node* node = malloc(sizeof(struct Node));
		//m = node;
		node->val = i + 1;
		node->next = NULL;
		if (tail) {
			tail->next = node;
			tail = node;
		} else {
			head = node;
			tail = node;
		}
		m = node;
		//}
	} 
	while (n-- > 1) {
		m = m->next;
		q = m->next;
		m->next = q->next;
		free(q);
	}

	printf("%d", m);
}