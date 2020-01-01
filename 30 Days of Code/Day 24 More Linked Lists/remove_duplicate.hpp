#ifndef DUPLICATE
#define DUPLICATE

template <class T>
class Node
{
	public:
		Node(T data);
		~Node();
		T GetData();
		Node *GetNext();
		void SetData(T data);
		void SetNext(Node *next);

	private:
		T data_;
		Node<T> *next_;
};

template <class T>
class LinkedList
{
	public:
		LinkedList();
		~LinkedList();
		void Display();
		void Insert(T data);
		void RemoveDuplicate();

	private:
		Node<T> *head_;
};
		

#endif