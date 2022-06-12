# class Tree:
#     def __init__(self, val, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def solve(self, root):
        def solveR(node):
            ## return (min_val, max_val, is_bst, res) from this node
            if not node:
                return float("inf"), float("-inf"), True, 0

            l_min, l_max, l_bst, l_res = solveR(node.left)
            r_min, r_max, r_bst, r_res = solveR(node.right)
            is_bst = l_bst and r_bst and l_max <= node.val <= r_min
            if is_bst:
                res = max(node.val + l_res + r_res, l_res, r_res)
            else:
                res = max(l_res, r_res)
            return min(l_min, node.val), max(r_max, node.val), is_bst, res

        _, _, _, res = solveR(root)
        return res
