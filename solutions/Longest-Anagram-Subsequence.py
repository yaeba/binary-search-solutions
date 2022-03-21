from collections import Counter


class Solution:
    def solve(self, a, b):
        return sum((Counter(a) & Counter(b)).values())
