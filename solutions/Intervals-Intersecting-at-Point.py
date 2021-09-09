class Solution:
    def solve(self, intervals, point):
        return sum(a <= point and point <= b for (a, b) in intervals)
