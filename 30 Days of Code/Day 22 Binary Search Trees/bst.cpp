#include <iostream>
#include <algorithm>
using namespace std;

class Node
{
	public:
		Node(int data):
			data_(data),
			left_(nullptr),
			right_(nullptr)
		{}

		~Node() {
			delete left_;
			delete right_;
		}

		int GetData() { return data_;}
		Node *GetLeft() { return left_;}
		Node *GetRight() { return right_;}
		void SetLeft(Node *left) { left_ = left;}
		void SetRight(Node *right) { right_ = right;}

	private:
		int data_;
		Node *left_;
		Node *right_;
};

class BST
{
	public:
		BST(): root_(nullptr)
		{}

		~BST() {
			delete root_;
		}

		Node *Insert(Node *node, int &data);
		int GetHeight(Node *node);
		Node *GetRoot() { return root_;}
		void SetRoot(Node *root) { root_ = root;}

	private:
		Node *root_;
};

Node *BST::Insert(Node *node, int &data) {
	if (node == nullptr) {
		node = new Node(data);
	} else {
		if (node->GetData() < data) {
			node->SetRight(Insert(node->GetRight(), data));
		} else {
			node->SetLeft(Insert(node->GetLeft(), data));
		}
	}
	return node;
}

int BST::GetHeight(Node *node) {
	if (node == nullptr) {
		return -1;
	} else if (node->GetLeft() == nullptr) {
		if (node->GetRight() == nullptr) {
			cout << "max(0, 0)" << endl;
			return 0;
		} else {
			cout << "max(0, " << node->GetRight()->GetData() << ")" << endl;
			return 1 + GetHeight(node->GetRight());
		}
	} else {
		if (node->GetRight() == nullptr) {
			cout << "max(" << node->GetLeft()->GetData() << ", 0)" << endl;
			return 1 + GetHeight(node->GetLeft());
		} else {
			cout << "max(" << node->GetLeft()->GetData() << ", " << node->GetRight()->GetData() << ")" << endl;
			return 1 + max(GetHeight(node->GetLeft()), GetHeight(node->GetRight()));
		}
	}
}

int main()
{
	int n = 0;
	cin >> n;
	BST *b_tree = new BST();

	for (int i = 0; i < n; i++) {
		int num = 0;
		cin >> num;
		b_tree->SetRoot(b_tree->Insert(b_tree->GetRoot(), num));
	}

	int height = b_tree->GetHeight(b_tree->GetRoot());
	cout << height;
	delete b_tree;
}