class Solution:
    def solve(self, matrix):
        uniq = set()

        for row in matrix:
            u_row = set(row)
            if len(u_row) < len(row):
                return False
            uniq = uniq.union(u_row)

        for col in zip(*matrix):
            u_col = set(col)
            if len(u_col) < len(col):
                return False
            uniq = uniq.union(u_col)

        return len(uniq) == len(matrix)
