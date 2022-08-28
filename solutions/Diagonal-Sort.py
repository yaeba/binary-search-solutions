from collections import defaultdict


class Solution:
    def solve(self, matrix):
        n_rows = len(matrix)
        n_cols = len(matrix[0])

        # given matrix = [[1,2,3],
        #                 [4,5,6],
        #                 [7,8,9]]
        # find diags where
        # diags[-2] = [3]
        # diags[-1] = [2,6]
        # diags[0]  = [1,5,9]
        # diags[1]  = [4,8]
        # diags[2]  = [7]
        diags = defaultdict(list)
        for r in range(n_rows):
            for c in range(n_cols):
                diags[r - c].append(matrix[r][c])

        for diag in diags.values():
            diag.sort(reverse=True)

        for r in range(n_rows):
            for c in range(n_cols):
                matrix[r][c] = diags[r - c].pop()

        return matrix
