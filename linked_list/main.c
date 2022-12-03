#include <stdio.h>
#include <stdlib.h>

struct Node {
	int val;
	struct Node* next;
};


int main()
{
	struct Node* head = NULL, *tail = NULL;
	int n;
	do {
		scanf("%d", &n);
		if (n != -1) {
			struct Node* node = malloc(sizeof(struct Node));
			node->val = n;
			node->next = NULL;
			if (tail) {
				tail->next = node;
				tail = node;
			} else {
				head = node;
				tail = node;
			}
		}
	} while (n != -1);


}