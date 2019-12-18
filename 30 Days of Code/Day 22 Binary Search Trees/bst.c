#include <stdio.h>
#include <stdlib.h>

#define max(x, y) (x > y ? x : y)

typedef struct NodeStruct
{
	struct NodeStruct *left_;
	struct NodeStruct *right_;
	int data_;
} Node;

Node *create_node(int data) {
	Node *node = (Node*)malloc(sizeof(Node));
	node->data_ = data;
	node->left_ = NULL;
	node->right_ = NULL;
	return node;
}

Node *Insert(Node *node, int data) {
	if (node == NULL) {
		node = create_node(data);
	} else if (node->data_ < data) {
		node->right_ = Insert(node->right_, data);
	} else {
		node->left_ = Insert(node->left_, data);
	}
	return node;
}

int GetHeight(Node *node) {
	if (node == NULL) {
		return -1;
	} else if (node->left_ == NULL) {
		if (node->right_ == NULL) {
			return 0;
		} else {
			return 1 + GetHeight(node->right_);
		}
	} else {
		if (node->right_ == NULL) {
			return 1 + GetHeight(node->left_);
		} else {
			return 1 + max(GetHeight(node->left_), GetHeight(node->right_));
		}
	}
}

void FreeNode(Node *node) {
	if (node == NULL) {
		return;
	} else if (node->left_ == NULL) {
		if (node->right_ == NULL) {
			free(node);
		} else {
			FreeNode(node->right_);
		}
	} else {
		if (node->right_ == NULL) {
			FreeNode(node->left_);
		} else {
			FreeNode(node->left_);
			FreeNode(node->right_);
		}
	}
}

int main()
{
	Node *node = NULL;
	int n = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int num = 0;
		scanf("%d", &num);
		node = Insert(node, num);
	}

	int height = GetHeight(node);
	printf("%d", height);
	FreeNode(node);
	return 0;
}