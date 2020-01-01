class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None

    def Display(self):
        current = self.head

        while current != None:
            print(str(current.data) + ' ', end = '')
            current = current.next

    def Insert(self, data):
        if self.head == None:
            self.head = Node(data)
        else:
            current = self.head

            while current.next != None:
                current = current.next

            current.next = Node(data)

    def RemoveDuplicate(self):
        current = self.head.next
        previous = self.head

        while current != None:
            if previous.data != current.data:
                previous.next = current
                previous = current
            current = current.next
        previous.next = None


n = int(input())
llist = LinkedList()
for i in range(n):
    llist.Insert(int(input()))

llist.RemoveDuplicate()
llist.Display()

