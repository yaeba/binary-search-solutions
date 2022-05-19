# class LLNode:
#     def __init__(self, val, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def merge(x, y):
        if not x or not y:
            return x if x else y

        dummy = LLNode(-1)
        curr = dummy
        while x and y:
            if x.val < y.val:
                curr.next, x = x, x.next
            else:
                curr.next, y = y, y.next
            curr = curr.next

        if x:
            curr.next = x
        elif y:
            curr.next = y

        return dummy.next

    def solve(self, node):
        # base case
        if not node or not node.next:
            return node

        a, b, c = None, node, node
        while c and c.next:
            a, b, c = b, b.next, c.next.next

        # at this point
        # [ node ... -> a ] -> [ b -> ... ]
        #        LEFT             RIGHT
        a.next = None
        left_res = self.solve(node)
        right_res = self.solve(b)
        return Solution.merge(left_res, right_res)
