# class Tree:
#     def __init__(self, val, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def solve(self, root):
        from collections import Counter

        if not root:
            return True
        queue = [root]
        colors = Counter()
        lens = [1]
        while queue:
            colors += Counter(node.val for node in queue)
            queue = [
                child for node in queue for child in (node.left, node.right) if child
            ]
            lens.append(len(queue))
        return sum(lens[::2]) in colors.values()
