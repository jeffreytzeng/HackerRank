import java.util.Scanner;
import java.util.Queue;
import java.util.LinkedList;
import java.util.Stack;

class Node {
	int data;
	Node left;
	Node right;

	Node (int data) {
		this.data = data;
		this.left = null;
		this.right = null;
	}
}

class BST {
	Node root;

	BST() {
		root = null;
	}

	Node Insert(Node node, int data) {
		if (node == null) {
			node = new Node(data);
		} else {
			if (node.data < data) {
				node.right = Insert(node.right, data);
			} else {
				node.left = Insert(node.left, data);
			}
		}
		return node;
	}

	void LevelOrder(Node root) {
		Queue<Node> queue = new LinkedList<Node>();

		if (root != null) {
			queue.add(root);

			while (!queue.isEmpty()) {
				Node node = queue.remove();
				System.out.print(node.data + " ");

				if (node.left != null) {
					queue.add(node.left);
				}
				if (node.right != null) {
					queue.add(node.right);
				}
			}
		}
	}
}

public class Traversal {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt();
		BST b = new BST();
		while(T-->0) {
			int data = sc.nextInt();
			b.root = b.Insert(b.root, data);
		}
		b.LevelOrder(b.root);
	}
}
