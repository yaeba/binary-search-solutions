from collections import defaultdict

# class Tree:
#     def __init__(self, val, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def solve(self, root):
        freq = defaultdict(int)

        def solveR(node):
            if not node:
                return 0
            subtree_sum = node.val + solveR(node.left) + solveR(node.right)
            freq[subtree_sum] += 1
            return subtree_sum

        solveR(root)

        return max(freq, key=freq.get)
