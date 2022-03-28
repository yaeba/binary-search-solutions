class Solution:
    def solve(self, matrix):
        rowmax = [max(row) for r, row in enumerate(matrix)]
        colmax = [max(col) for c, col in enumerate(zip(*matrix))]

        return [
            [min(rowmax[r], colmax[c]) for c in range(len(matrix[r]))]
            for r in range(len(matrix))
        ]
