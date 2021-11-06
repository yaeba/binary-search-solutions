# class Tree:
#     def __init__(self, val, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def solveR(root, acc):
        if not root:
            return
        Solution.solveR(root.left, acc)
        acc.append(root.val)
        Solution.solveR(root.right, acc)

    def solve(self, root):
        res = []
        Solution.solveR(root, res)
        return res
