# class Tree:
#     def __init__(self, val, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def solve(self, root):
        n_leaves = 0
        n_nodes = 0

        def helper(node):
            nonlocal n_leaves, n_nodes
            if node is None:
                return
            n_nodes += 1
            if node.left is None and node.right is None:
                n_leaves += 1
                return
            helper(node.left)
            helper(node.right)

        helper(root)
        return [n_leaves, n_nodes - n_leaves]
