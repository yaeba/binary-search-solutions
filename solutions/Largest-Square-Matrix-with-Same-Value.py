class Solution:
    def solve(self, matrix):
        # dynamic programming
        # dp[i][j] stores the max len of square with bottom right at i, j
        n_rows = len(matrix)
        n_cols = len(matrix[0])
        dp = [[1 for _ in range(n_cols + 1)] for _ in range(n_rows + 1)]

        for i in range(2, n_rows + 1):
            for j in range(2, n_cols + 1):
                # it is a bigger square if it has same value as
                # (i-1, j-1), (i-1, j), (i, j-1)
                curr = matrix[i - 1][j - 1]
                neighbours = [matrix[i - 2][j - 2], matrix[i - 2][j - 1], matrix[i - 1][j - 2]]
                if any(neighbour != curr for neighbour in neighbours):
                    continue
                dp[i][j] = 1 + min(dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1])

        return max(x for row in dp for x in row)
