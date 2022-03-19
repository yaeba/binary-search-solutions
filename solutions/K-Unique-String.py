from collections import Counter


class Solution:
    def solve(self, s, k):
        return sum(v for k, v in Counter(s).most_common()[k:])
