class Solution:
    def solve(self, s):
        o = 0
        for c in s:
            o += 1 if c == "(" else -1
            if o < 0:
                return False
        return o == 0
