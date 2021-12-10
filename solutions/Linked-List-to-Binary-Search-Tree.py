# class Tree:
#     def __init__(self, val, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

# class LLNode:
#     def __init__(self, val, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def solve(self, node):
        lst = []
        while node:
            lst.append(node.val)
            node = node.next

        def tree(xs):
            mid = len(xs) // 2
            if xs:
                return Tree(xs[mid], tree(xs[:mid]), tree(xs[mid + 1 :]))
            else:
                return None

        return tree(lst)
