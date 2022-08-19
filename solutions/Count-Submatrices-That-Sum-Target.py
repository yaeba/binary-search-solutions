from collections import defaultdict


class Solution:
    def solve(self, matrix, target):
        # dynamic programming
        # first calculate 2D prefix sum
        # dp[i][j] stores sum of matrix with bottom right at i, j
        # eg input = [[1,  2,  3]
        #             [4,  5,  6]]
        #       dp = [[1,  3,  6]
        #             [5, 12, 21]]
        n_rows = len(matrix)
        n_cols = len(matrix[0])
        dp = [[0 for _ in range(n_cols + 1)] for _ in range(n_rows + 1)]

        for i in range(1, n_rows + 1):
            for j in range(1, n_cols + 1):
                dp[i][j] = matrix[i - 1][j - 1] + dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1]

        res = 0
        for top in range(1, n_rows + 1):
            for bot in range(top, n_rows + 1):
                complement = defaultdict(int, {0: 1})
                for col in range(1, n_cols + 1):
                    sublist_sum = dp[bot][col] - dp[top - 1][col]
                    res += complement[sublist_sum - target]
                    complement[sublist_sum] += 1

        return res
