class Solution:
    def solve(self, matrix):
        row = defaultdict(int)
        col = defaultdict(int)

        for r in range(len(matrix)):
            for c in range(len(matrix[r])):
                if matrix[r][c] == 1:
                    row[r] += 1
                    col[c] += 1

        res = 0
        for r in range(len(matrix)):
            for c in range(len(matrix[r])):
                if row[r] != 1:
                    continue
                elif matrix[r][c] == 1 and col[c] == 1:
                    res += 1

        return res
