class node :
    def __init__(self, data):
        self.right = None
        self.left = None
        self.data = data
def insert(root,node):
    if root is None:
        root.data = node.data
    elif root.data < node.data:
        root.right = insert(root.right,node.data)
    elif root.data > node.data:
        root.left = insert(root.left,node.data)
    return root
def preorder(root):
    if root is not None:
        print(root.data)
        preorder(root.left)
        preorder(root.right)
num = input(int("Enter number:"))