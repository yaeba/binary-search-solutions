# class Tree:
#     def __init__(self, val, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def solve(self, root):
        lst = []

        def helper(node):
            if not node:
                return
            helper(node.left)
            lst.append(node.val)
            helper(node.right)

        helper(root)
        return lst == lst[::-1]
