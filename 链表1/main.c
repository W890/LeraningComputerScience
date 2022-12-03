#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node* next;
}Node;

int main()

{
	int N;
	scanf("%d", &N);

	Node* head = NULL;
	for (int i = 0; i < N; i++) {
		int a;
		scanf("%d", &a);

		Node* p = malloc(sizeof(Node));
		p->data = a;
		p->next = NULL;

		if (head != NULL) {
			Node* last = head;
			while (last->next != NULL) {
				last = last->next;
			}
			last->next = p;
		} else {
			head = p;
		}
	}


}
