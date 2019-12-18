class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


class BST:
    def __init__(self):
        self.root = None

    def Insert(self, node, data):
        if node == None:
            node = Node(data)
        else:
            if node.data < data:
                node.right = self.Insert(node.right, data)
            else:
                node.left = self.Insert(node.left, data)
        return node

    def GetHeight(self, node):
        if node == None:
            return -1
        elif node.left == None:
            if node.right == None:
                return 0
            else:
                return 1 + self.GetHeight(node.right)
        else:
            if node.right == None:
                return 1 + self.GetHeight(node.left)
            else:
                return 1 + max(self.GetHeight(node.left), self.GetHeight(node.right))


n = int(input())
b_tree = BST()
for i in range(n):
    b_tree.root = b_tree.Insert(b_tree.root, int(input()))

print(b_tree.GetHeight(b_tree.root))
