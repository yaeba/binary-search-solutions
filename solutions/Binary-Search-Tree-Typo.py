# class Tree:
#     def __init__(self, val, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def solve(self, root):
        ## an easy option is to convert the binary tree
        ## into a list, sort and reconstruct the tree

        ## another option would be to find the two nodes
        ## with inorder traversal, and swap their values
        node_a = node_b = prev = None

        def inorder(node):
            nonlocal node_a, node_b, prev
            if not node:
                return
            inorder(node.left)
            if prev and node.val < prev.val:
                # `prev` is in the wrong place
                node_a = node
                node_b = prev if not node_b else node_b
            prev = node
            inorder(node.right)

        inorder(root)

        # swap node_a and node_b
        node_a.val, node_b.val = node_b.val, node_a.val

        return root
