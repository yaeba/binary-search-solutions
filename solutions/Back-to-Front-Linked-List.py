# class LLNode:
#     def __init__(self, val, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def solve(self, node):
        if not node:
            return None
        lst = []
        while node:
            lst.append(node)
            node = node.next
        ordered = [lst.pop(0 if i % 2 else -1) for i in range(len(lst))]
        for (a, b) in zip(ordered, ordered[1:]):
            a.next = b
        ordered[-1].next = None
        return ordered[0]
