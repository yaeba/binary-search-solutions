from collections import Counter


class Solution:
    def solve(self, words):
        return max(Counter("".join(sorted(word)) for word in words).values())
