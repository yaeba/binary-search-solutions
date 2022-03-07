class Solution:
    def solve(self, matrix):
        # transpose matrix and reverse
        return list(zip(*matrix))[::-1]
