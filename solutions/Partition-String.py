class Solution:
    def solve(self, s):
        res = []
        last_seen = {char: idx for idx, char in enumerate(s)}

        max_seen = 0
        left = 0
        for idx, char in enumerate(s):
            max_seen = max(max_seen, last_seen[char])
            if max_seen == idx:
                res.append(idx - left + 1)
                left = idx + 1

        return res
