class Solution:
    def solve(self, matrix):
        rowsums = [sum(row) for row in matrix]
        colsums = [sum(col) for col in zip(*matrix)]

        return sum(
            rowsums[row] == 0 and colsums[col] == 0
            for row in range(len(matrix))
            for col in range(len(matrix[row]))
        )
