import java.util.Scanner;

class Node {
	int data;
	Node next;

	Node(int data) {
		this.data = data;
		next = null;
	}
}

public class RemoveDuplicate {
	public static void Display(Node head) {
		Node current = head;

		while (current != null) {
			System.out.print(current.data + " ");
			current = current.next;
		}
	}

	public static Node Insert(Node head, int data) {
		if (head == null) {
			head = new Node(data);
		} else {
			Node temp = head;

			while (temp.next != null) {
				temp = temp.next;
			}
			temp.next = new Node(data);
		}

		return head;
	}

	public static void RemoveDuplicates(Node head) {
		Node current = head.next;
		Node previous = head;

		while (current != null) {
			if (current.data != previous.data) {
				previous.next = current;
				previous = current;
			}
			current = current.next;
		}
		// In case all numbers are the same in the list.
		// In other cases "previous = currrent" makes previous points to last one.
		previous.next = null;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int size = sc.nextInt();
		Node head = null;

		for (int i = 0; i < size; i++) {
			head = Insert(head, sc.nextInt());
		}

		RemoveDuplicates(head);
		Display(head);
	}
}

			