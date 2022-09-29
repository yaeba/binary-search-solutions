class Solution:
    def solve(self, matrix):
        cache = {}
        n_rows, n_cols = len(matrix), len(matrix[0])

        def solveR(i, j):
            if (i, j) in cache:
                return cache[(i, j)] + 1

            def valid(x, y):
                return 0 <= x < n_rows and 0 <= y < n_cols and matrix[x][y] > matrix[i][j]

            up = solveR(i - 1, j) if valid(i - 1, j) else 0
            down = solveR(i + 1, j) if valid(i + 1, j) else 0
            left = solveR(i, j - 1) if valid(i, j - 1) else 0
            right = solveR(i, j + 1) if valid(i, j + 1) else 0
            cache[(i, j)] = max(up, down, left, right)

            return cache[(i, j)] + 1

        for r in range(n_rows):
            for c in range(n_cols):
                solveR(r, c)

        return max(cache.values()) + 1
