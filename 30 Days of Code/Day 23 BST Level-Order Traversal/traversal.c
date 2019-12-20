#include <stdio.h>
#include <stdlib.h>

typedef struct NodeStruct {
	int data;
	struct NodeStruct *left;
	struct NodeStruct *right;
} Node;

Node *Insert(Node *node, int data) {
	if (node == NULL) {
		node = (Node*)malloc(sizeof(Node));
		node->data = data;
		node->left = NULL;
		node->right = NULL;
	} else {
		if (node->data < data) {
			node->right = Insert(node->right, data);
		} else {
			node->left = Insert(node->left, data);
		}
	}
	return node;
}

void FreeNode(Node *node) {
	if (node != NULL) {
		if (node->left == NULL && node->right == NULL) {
			free(node);
		} else if (node->left == NULL) {
			FreeNode(node->right);
		} else if (node->right == NULL) {
			FreeNode(node->left);
		} else {
			FreeNode(node->left);
			FreeNode(node->right);
		}
	}
}

void LevelOrder(Node *node) {
	int capacity = 5;
	int head = 0;
	int end = 0;
	Node **node_arr = (Node**)malloc(sizeof(Node)*capacity);

	if (node != NULL) {
		node_arr[end++] = node;
		while (end - head > 0) {
			Node *temp = node_arr[head++];
			printf("%d ", temp->data);

			if (temp->left != NULL) {
				// Creating new array with double space as old one when old one is full.
				if (capacity <= end) {
					capacity *= 2;
					Node **temp_arr = (Node**)malloc(sizeof(Node)*capacity);
					// Only copying nodes which are not used yet.
					for (int i = head; i < end; i++) {
						temp_arr[i-head] = node_arr[i];
					}
					// Releasing old memory resource.
					free(node_arr);
					node_arr = temp_arr;
					// Recounting from start.
					end -= head;
					head = 0;
				}
				node_arr[end++] = temp->left;
			}
			if (temp->right != NULL) {
				// Creating new array with double space as old one when old one is full.
				if (capacity <= end) {
					capacity *= 2;
					Node **temp_arr = (Node**)malloc(sizeof(Node)*capacity);
					// Only copying nodes which are not used yet.
					for (int i = head; i < end; i++) {
						temp_arr[i-head] = node_arr[i];
					}
					// Releasing old memory resource.
					free(node_arr);
					node_arr = temp_arr;
					// Recounting from start.
					end -= head;
					head = 0;
				}
				node_arr[end++] = temp->right;
			}
		}
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	Node *node = NULL;

	for (int i = 0; i < n; i++) {
		int num = 0;
		scanf("%d", &num);
		node = Insert(node, num);
	}
	LevelOrder(node);
	FreeNode(node);
	return 0;
}