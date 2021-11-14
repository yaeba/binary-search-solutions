# class Tree:
#     def __init__(self, val, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def solve(self, root, moves):
        prevs = []
        res = root
        for move in moves:
            if move == "UP":
                res = prevs.pop()
            elif move == "LEFT":
                prevs.append(res)
                res = res.left
            elif move == "RIGHT":
                prevs.append(res)
                res = res.right
        return res.val
