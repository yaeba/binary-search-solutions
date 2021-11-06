# class Tree:
#     def __init__(self, val, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def get_leaves(root, acc):
        if not root:
            return
        elif not root.left and not root.right:
            acc.append(root.val)
        Solution.get_leaves(root.left, acc)
        Solution.get_leaves(root.right, acc)

    def solve(self, root0, root1):
        a, b = [], []
        Solution.get_leaves(root0, a)
        Solution.get_leaves(root1, b)
        return a == b
