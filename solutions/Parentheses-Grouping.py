class Solution:
    def solve(self, s):
        res = []
        opened = 0
        left = 0
        for i, c in enumerate(s):
            opened += 1 if c == "(" else -1
            if opened == 0:
                res.append(s[left : i + 1])
                left = i + 1

        return res
