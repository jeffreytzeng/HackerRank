#include <stdio.h>
#include <stdlib.h>

typedef struct NodeStruct {
	int data;
	struct NodeStruct *next;
} Node;

typedef struct LinkedListStruct {
	Node *head;
	void (*Display)(Node *node);
	Node *(*Insert)(Node *node, int data);
	void (*RemoveDuplicate)(Node *node);
} LinkedList;

void FreeNode(Node *node) {
	Node *current = node;

	while (node->next != NULL) {
		current = node->next;
		free(node);
		node = current;
	}
	free(current);
}

void DisplayData(Node *node) {
	Node *current = node;

	while (current->next != NULL) {
		printf("%d ", current->data);
		current = current->next;
	}
	printf("%d", current->data);
}

Node *InsertData(Node *node, int data) {
	if (node == NULL) {
		node = (Node*)malloc(sizeof(Node));
		node->data = data;
		node->next = NULL;
	} else {
		Node *current = node;

		while (current->next != NULL) {
			current = current->next;
		}
		current->next = (Node*)malloc(sizeof(Node));
		current->next->data = data;
		current->next->next = NULL;
	}
	return node;
}

void RemoveDuplicateData(Node *node) {
	Node *current = node->next;
	Node *previous = node;

	while (current != NULL) {
		if (previous->data != current->data) {
			free(previous->next);
			previous->next = current;
			previous = current;
		}
		current = current->next;
	}
	previous->next = NULL;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	LinkedList llist = {.head = NULL,
						.Insert = InsertData,
						.Display = DisplayData,
						.RemoveDuplicate = RemoveDuplicateData};

	for (int i = 0; i < n; i++) {
		int num = 0;
		scanf("%d", &num);
		llist.head = llist.Insert(llist.head, num);
	}

	llist.RemoveDuplicate(llist.head);
	llist.Display(llist.head);
	FreeNode(llist.head);
	return 0;
}
