class Solution:
    def solve(self, matrix):
        # key point here is to realise we can identify the diagonal and antidiagonal
        # by using x + y and x - y (think gradient = +1 or -1)
        rows, cols, f_diags, b_diags = set(), set(), set(), set()
        for r in range(len(matrix)):
            for c in range(len(matrix[r])):
                if not matrix[r][c]:
                    continue
                if r in rows or c in cols or r + c in f_diags or r - c in b_diags:
                    return False
                rows.add(r)
                cols.add(c)
                f_diags.add(r + c)
                b_diags.add(r - c)
        return len(rows) == len(matrix)
