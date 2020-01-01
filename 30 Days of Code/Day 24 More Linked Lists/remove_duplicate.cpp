#include <iostream>
#include "remove_duplicate.hpp"
using namespace std;

template <class T>
Node<T>::Node(T data):
	data_(data),
	next_(nullptr)
{}

// Delete next call its next deleted in order.
template <class T>
Node<T>::~Node()
{
	delete next_;
}

template <class T>
T Node<T>::GetData()
{
	return data_;
}

template <class T>
Node<T> *Node<T>::GetNext()
{
	return next_;
}

template <class T>
void Node<T>::SetData(T data)
{
	data_ = data;
}

template <class T>
void Node<T>::SetNext(Node<T> *next)
{
	next_ = next;
}

template <class T>
LinkedList<T>::LinkedList():
	head_(nullptr)
{}

template <class T>
LinkedList<T>::~LinkedList()
{
	delete head_;
}

template <class T>
void LinkedList<T>::Display()
{
	Node<T> *current = head_;

	while (current != nullptr) {
		cout << current->GetData() << " ";
		current = current->GetNext();
	}
}

template <class T>
void LinkedList<T>::Insert(T data)
{
	if (head_ == nullptr) {
		head_ = new Node<T>(data);
	} else {
		Node<T> *current = head_;

		while (current->GetNext() != nullptr) {
			current = current->GetNext();
		}

		current->SetNext(new Node<T>(data));
	}
}

template <class T>
void LinkedList<T>::RemoveDuplicate()
{
	Node<T> *current = head_->GetNext();
	Node<T> *previous = head_;

	while (current != nullptr) {
		if (previous->GetData() != current->GetData()) {
			previous->SetNext(current);
			previous = current;
		}
		current = current->GetNext();
	}
	previous->SetNext(nullptr);
}

int main()
{
	int n = 0;
	cin >> n;
	LinkedList<int> *llist = new LinkedList<int>();

	for (int i = 0; i < n; i++) {
		int num = 0;
		cin >> num;
		llist->Insert(num);
	}

	llist->RemoveDuplicate();
	llist->Display();
	delete llist;
}