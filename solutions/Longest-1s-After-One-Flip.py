class Solution:
    def solve(self, s):
        s = [len(ones) for ones in s.split("0")]
        if len(s) <= 1:
            return s[0]
        return max(a + b + 1 for a, b in zip(s, s[1:]))
