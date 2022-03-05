from collections import Counter


class Solution:
    def solve(self, s):
        return len(set(k for k, v in Counter(s).items() if v % 2 == 1)) <= 1
