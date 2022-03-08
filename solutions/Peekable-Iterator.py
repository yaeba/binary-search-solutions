from collections import deque


class PeekableIterator:
    def __init__(self, nums):
        self.q = deque(nums)

    def peek(self):
        return self.q[0]

    def next(self):
        return self.q.popleft()

    def hasnext(self):
        return bool(self.q)
