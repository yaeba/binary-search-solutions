from collections import Counter


class Solution:
    def solve(self, s):
        seen = set()
        res = 0
        for freq in Counter(s).values():
            while freq and freq in seen:
                freq -= 1
                res += 1
            seen.add(freq)

        return res
