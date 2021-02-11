class Solution:
    def solve(self, matrix):
        n = len(matrix)
        for r in range(n):
            for c in range(r):
                # (r, c) will be
                # [(1, 0), (2, 0), (2, 1), ...]
                # ie lower triangle of matrix
                # [ - . .
                #   x - .
                #   x x - ]
                matrix[r][c], matrix[c][r] = matrix[c][r], matrix[r][c]
        return matrix
