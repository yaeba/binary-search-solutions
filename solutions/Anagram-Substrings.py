from collections import Counter


class Solution:
    def solve(self, s0, s1):
        a = Counter(s0)
        b = Counter(s1[: len(s0)])
        res = int(a == b)

        for idx, char in enumerate(s1[len(s0) :]):
            b[char] += 1
            b[s1[idx]] -= 1
            res += (b & a) == a

        return res
