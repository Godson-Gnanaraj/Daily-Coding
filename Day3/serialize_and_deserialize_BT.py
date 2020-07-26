class Node:

    def __init__(self, val, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


def dfs_append(node, string):
    if node:
        string.append(node.val)
        dfs_append(node.left, string)
        dfs_append(node.right, string)
        return None
    return string.append(node)


def create_tree(iterator):
    val = next(iterator)
    if val is None:
        return val
    root = Node(val)
    root.left = create_tree(iterator)
    root.right = create_tree(iterator)
    return root


def serialize(root):
    string = []
    dfs_append(root, string)
    return string


def deserialize(data):
    return create_tree(iter(data))


def main():
    node = Node('root', Node('left', Node('left.left')), Node('right'))
    assert deserialize(serialize(node)).left.left.val == 'left.left'


if __name__ == "__main__":
    main()
