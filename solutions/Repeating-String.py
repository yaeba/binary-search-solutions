class Solution:
    def solve(self, s):
        twice = 2 * s
        return s in twice[1:-1]
