class Solution:
    def solve(self, matrix):
        # dynamic programming
        # dp[i][j] stores the max len of square with bottom right at i, j
        n_rows = len(matrix)
        n_cols = len(matrix[0])
        dp = [[0 for _ in range(n_cols + 1)] for _ in range(n_rows + 1)]

        for i in range(1, n_rows + 1):
            for j in range(1, n_cols + 1):
                if matrix[i - 1][j - 1] == 0:
                    continue
                dp[i][j] = 1 + min(dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1])
        longest_side = max(x for row in dp for x in row)
        return longest_side ** 2
