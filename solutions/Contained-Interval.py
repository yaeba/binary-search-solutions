class Solution:
    def solve(self, intervals):
        s = sorted(intervals, key=lambda x: (x[0], -x[1]))
        for i in range(1, len(s)):
            _, b1 = s[i - 1]
            _, b2 = s[i]
            if b2 <= b1:
                return True

        return False
