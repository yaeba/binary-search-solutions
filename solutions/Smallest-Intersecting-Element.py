class Solution:
    def solve(self, matrix):
        try:
            return min(set(matrix[0]).intersection(*matrix))
        except:
            return -1
