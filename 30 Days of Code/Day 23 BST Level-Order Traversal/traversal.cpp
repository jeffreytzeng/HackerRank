#include <iostream>
#include <queue>
using namespace std;

template <class T>
class Node
{
	public:
		Node(T data):
			data_(data),
			left_(nullptr),
			right_(nullptr)
		{}
		~Node() {
			delete left_;
			delete right_;
		}

		T GetData() { return data_;}
		Node *GetLeft() { return left_;}
		Node *GetRight() { return right_;}
		void SetLeft(Node *left) { left_ = left;}
		void SetRight(Node *right) { right_ = right;}

	private:
		T data_;
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

		Node<int> *Insert(Node<int> *node, int data);
		void Traversal(Node<int> *node);
		Node<int> *GetRoot() { return root_;}
		void SetRoot(Node<int> *node) { root_ = node;}

	private:
		Node<int> *root_;
};

Node<int> *BST::Insert(Node<int> *node, int data) {
	if (node == nullptr) {
		node = new Node<int>(data);
	} else {
		if (node->GetData() < data) {
			node->SetRight(Insert(node->GetRight(), data));
		} else {
			node->SetLeft(Insert(node->GetLeft(), data));
		}
	}
}

void BST::Traversal(Node<int> *node) {
	queue<Node<int>*> que;

	if (node != nullptr) {
		que.push(node);

		while (!que.empty()) {
			Node<int> *temp = que.front();
			que.pop();
			cout << temp->GetData() << " ";

			if (temp->GetLeft() != nullptr) {
				que.push(temp->GetLeft());
			}
			if (temp->GetRight() != nullptr) {
				que.push(temp->GetRight());
			}
		}
	}
}

int main()
{
	int n = 0;
	cin >> n;
	BST *b = new BST();
	int num = 0;
	for (int i = 0; i < n; i++) {
		cin >> num;
		b->SetRoot(b->Insert(b->GetRoot(), num));
	}
	b->Traversal(b->GetRoot());
	delete b;
}
	