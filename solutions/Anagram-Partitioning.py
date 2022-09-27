from collections import defaultdict


class Solution:
    def solve(self, a, b):
        diffs = defaultdict(int)
        res = [0]
        for i, (x, y) in enumerate(zip(a, b)):
            diffs[x] += 1
            diffs[y] -= 1
            if not any(diffs.values()):
                res.append(i + 1)

        return res[:-1] if res[-1] == len(a) else []
