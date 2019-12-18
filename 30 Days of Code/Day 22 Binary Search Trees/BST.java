import java.util.Scanner;

class Node {
	int data_;
	Node left, right;

	Node(int data) {
		data_ = data;
		left = right = null;
	}
}

public class BST {
	Node root_;

	BST() {
		root_ = null;
	}

	public Node insert(Node node, int data) {
		if (node == null) {
			node = new Node(data);
		} else {
			if (node.data_ < data) {
				node.right = insert(node.right, data);
			} else {
				node.left = insert(node.left, data);
			}
		}
		return node;
	}

	public int getHeight(Node root) {
		if (root == null) {
			return -1;
		} else if (root.left == null && root.right == null) {
			return 0;
		} else if (root.left == null) {
			return 1 + getHeight(root.right);
		} else if (root.right == null) {
			return 1 + getHeight(root.left);
		} else {
			return 1 + Math.max(getHeight(root.left), getHeight(root.right));
		}
	}	

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		BST bst = new BST();

		for (int i = 0; i < n; i++) {
			bst.root_ = bst.insert(bst.root_, input.nextInt());
		}

		int height = bst.getHeight(bst.root_);
		System.out.println(height);
	}
}
	