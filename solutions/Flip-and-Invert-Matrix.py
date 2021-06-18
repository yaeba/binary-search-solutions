class Solution:
    def solve(self, matrix):
        return [[1 - x for x in row[::-1]] for row in matrix]
