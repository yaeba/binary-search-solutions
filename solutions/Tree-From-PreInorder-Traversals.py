# class Tree:
#     def __init__(self, val, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def solve(self, preorder, inorder):
        inorder_map = {x: i for i, x in enumerate(inorder)}

        def solveR(pre_start, pre_end, in_start, in_end):
            if pre_start > pre_end or in_start > in_end:
                return None
            node = Tree(preorder[pre_start])
            inorder_idx = inorder_map[node.val]
            n_left = inorder_idx - in_start
            node.left = solveR(
                pre_start + 1, pre_start + n_left, in_start, inorder_idx - 1
            )
            node.right = solveR(
                pre_start + n_left + 1, pre_end, inorder_idx + 1, in_end
            )
            return node

        res = solveR(0, len(preorder) - 1, 0, len(inorder) - 1)
        return res
