from queue import Queue

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

    def LevelOrder(self):
        if (self.root != None):
            que = Queue(maxsize = 10)
            que.put(self.root)

            while (not que.empty()):
                temp_node = que.get()
                print(str(temp_node.data) + ' ', end='')

                if (temp_node.left != None):
                    que.put(temp_node.left)
                if (temp_node.right != None):
                    que.put(temp_node.right)


n = int(input())
b = BST()

for i in range(n):
    b.Insert(int(input()))

b.LevelOrder()
