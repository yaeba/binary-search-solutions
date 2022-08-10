class Solution:
    def solve(self, matrix):
        # dynamic programming
        # dp1d[i][j] stores number of "1" lists ending at i, j
        # dp2d[i][j] stores number of "1" rectangles with bottom right at i, j
        # we can calculate dp2d from dp1d
        # eg input = [[1,    1,      0]
        #             [0,    1,      1]]
        #     dp1d = [[1(a), 2(b),   0(c)]
        #             [0(d), 1(e),   2(f)]]
        #     dp2d = [[1(a), 2(b),   0(c)]
        #             [0(d), 3(e+b), 2(f)]]
        n_rows = len(matrix)
        n_cols = len(matrix[0])
        dp1d = [[0 for _ in range(n_cols + 1)] for _ in range(n_rows + 1)]
        dp2d = [[0 for _ in range(n_cols + 1)] for _ in range(n_rows + 1)]

        for i in range(1, n_rows + 1):
            for j in range(1, n_cols + 1):
                if matrix[i - 1][j - 1] == 0:
                    continue
                dp1d[i][j] = dp1d[i][j - 1] + 1
                local_min = dp1d[i][j]
                dp2d[i][j] = sum([local_min := min(local_min, dp1d[x][j]) for x in range(i, -1, -1) if local_min])

        # answer is sum of entries
        # eg input = [[0, 1, 1],
        #             [0, 1, 1]]
        #     dp2d = [[0, 1, 2],
        #             [0, 2, 4]]
        #      res = 9
        return sum(x for row in dp2d for x in row)
