# class Tree:
#     def __init__(self, val, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def solve(self, root):
        queue = [(root, 0)]
        pos = {}

        while queue:
            tmp = []
            for (node, x) in queue:
                if x not in pos:
                    pos[x] = node.val
                if node.left:
                    tmp.append((node.left, x - 1))
                if node.right:
                    tmp.append((node.right, x + 1))
            queue = tmp

        return [v for k, v in sorted(pos.items())]
