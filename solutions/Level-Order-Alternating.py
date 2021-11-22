# class Tree:
#     def __init__(self, val, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def solve(self, root):
        res = []
        queue = [root]
        reverse = False
        while queue:
            vals = [node.val for node in queue]
            res.extend(vals if not reverse else vals[::-1])
            queue = [
                child for node in queue for child in (node.left, node.right) if child
            ]
            reverse = not reverse
        return res
