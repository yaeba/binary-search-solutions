class Solution:
    def solve(self, matrix, blocks):
        loc = {c: (i, j) for (i, row) in enumerate(matrix) for (j, c) in enumerate(row)}

        path = [(0, 0)] + [loc[b] for b in blocks]

        return sum(
            [
                abs(x2[0] - x1[0]) + abs(x2[1] - x1[1])
                for (x1, x2) in zip(path, path[1:])
            ]
        )
