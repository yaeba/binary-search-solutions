class Solution:
    def solve(self, matrix):
        ones = set((i, j) for i in range(len(matrix)) for j in range(len(matrix[i])) if matrix[i][j])
        res = 0
        for i, j in ones:
            res += (i - 1, j) not in ones
            res += (i + 1, j) not in ones
            res += (i, j - 1) not in ones
            res += (i, j + 1) not in ones

        return res
