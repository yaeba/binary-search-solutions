from collections import deque, Counter


class EarliestUnique:
    def __init__(self, nums):
        self.deque = deque(nums)
        self.counts = Counter(nums)

    def add(self, num):
        self.deque.append(num)
        self.counts[num] += 1

    def earliestUnique(self):
        while self.deque and self.counts[self.deque[0]] > 1:
            self.deque.popleft()
        if not self.deque:
            return -1
        return self.deque[0]
