class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


class BST:
    def __init__(self):
        self.root = None

    def InsertNodeData(self, node, data):
        if node == None:
            node = Node(data)
        else:
            if node.data < data:
                node.right = self.InsertNodeData(node.right, data)
            else:
                node.left = self.InsertNodeData(node.left, data)

        return node

    def Insert(self, data):
        self.root = self.InsertNodeData(self.root, data)

    def LevelOrder(self, root):
        if (root != None):
            temp_list = [root]

            while (temp_list):
                temp_node = temp_list.pop(0)
                print(str(temp_node.data) + ' ', end='')

                if (temp_node.left != None):
                    temp_list.append(temp_node.left)
                if (temp_node.right != None):
                    temp_list.append(temp_node.right)


n = int(input())
b = BST()

for i in range(n):
    b.Insert(int(input()))

b.LevelOrder(b.root)
