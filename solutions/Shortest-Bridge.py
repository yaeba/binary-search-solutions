class Solution:
    def findIslandOne(matrix):
        res = []

        def dfs(x, y):
            try:
                assert x >= 0 and y >= 0 and matrix[x][y] == 1
                matrix[x][y] = -1
                res.append((x, y))
                dfs(x - 1, y)
                dfs(x + 1, y)
                dfs(x, y - 1)
                dfs(x, y + 1)
            except:
                return

        for r, row in enumerate(matrix):
            for c, cell in enumerate(row):
                if cell == 1:
                    dfs(r, c)
                    return res

    def solve(self, matrix):
        n_rows, n_cols = len(matrix), len(matrix[0])

        islandOne = Solution.findIslandOne(matrix)
        seen = set()
        queue = [(r, c, 0) for r, c in islandOne]

        for r, c, d in queue:
            if not 0 <= r < n_rows or not 0 <= c < n_cols:
                continue
            elif (r, c) in seen:
                continue
            elif matrix[r][c] == 1:
                ## found
                return d - 1

            seen.add((r, c))
            queue.append((r - 1, c, d + 1))
            queue.append((r + 1, c, d + 1))
            queue.append((r, c - 1, d + 1))
            queue.append((r, c + 1, d + 1))
