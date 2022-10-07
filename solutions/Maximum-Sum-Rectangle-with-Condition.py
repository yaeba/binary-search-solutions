class Solution:
    def solve(self, matrix, k):
        # first calculate 2D prefix sum
        # dp[i][j] stores sum of matrix with bottom right at i, j
        # eg input = [[1,  2,  3]
        #             [4,  5,  6]]
        #       dp = [[1,  3,  6]
        #             [5, 12, 21]]
        n_rows, n_cols = len(matrix), len(matrix[0])
        dp = [[0 for _ in range(n_cols + 1)] for _ in range(n_rows + 1)]

        # for all rectangles, calcuate sum with 2D prefix sum
        res = float("-inf")
        for i in range(1, n_rows + 1):
            for j in range(1, n_cols + 1):
                dp[i][j] = (
                    matrix[i - 1][j - 1]
                    + dp[i - 1][j]
                    + dp[i][j - 1]
                    - dp[i - 1][j - 1]
                )

        for top in range(1, n_rows + 1):
            for bot in range(top, n_rows + 1):
                for left in range(1, n_cols + 1):
                    for right in range(left, n_cols + 1):
                        rect_sum = (
                            dp[bot][right]
                            - dp[top - 1][right]
                            - dp[bot][left - 1]
                            + dp[top - 1][left - 1]
                        )
                        if rect_sum <= k:
                            res = max(res, rect_sum)

        return res
