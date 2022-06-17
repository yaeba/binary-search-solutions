class Solution:
    def solve(self, matrix, r, c, target):
        n_rows, n_cols = len(matrix), len(matrix[0])
        source = matrix[r][c]

        if source == target:
            return matrix

        def connected(i, j):
            return 0 <= i < n_rows and 0 <= j < n_cols and matrix[i][j] == source

        lst = [(r, c)]
        dirs = [(-1, 0), (1, 0), (0, -1), (0, 1)]

        for x, y in lst:
            if matrix[x][y] == target:
                continue
            matrix[x][y] = target
            for dx, dy in dirs:
                if connected(x + dx, y + dy):
                    lst.append((x + dx, y + dy))

        return matrix
