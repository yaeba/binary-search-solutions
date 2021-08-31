class Solution:
    def solve(self, matrix):
        return list(zip(*(sorted(row) for row in zip(*matrix))))
