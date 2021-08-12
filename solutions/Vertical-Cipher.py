class Solution:
    def solve(self, s, k):
        return [s[i::k] for i in range(k)]
