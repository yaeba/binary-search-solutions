from collections import defaultdict


class Solution:
    def solve(self, matrix):
        state = defaultdict(int, {(r, c): matrix[r][c] for r in range(len(matrix)) for c in range(len(matrix[r]))})

        def get_n_living_neighbours(r, c):
            return sum(state[(r + x, c + y)] for x in [-1, 0, 1] for y in [-1, 0, 1] if x != 0 or y != 0)

        for r in range(len(matrix)):
            for c in range(len(matrix[r])):
                n_living_neighbours = get_n_living_neighbours(r, c)
                if matrix[r][c] and 2 <= n_living_neighbours <= 3:
                    continue
                elif not matrix[r][c] and n_living_neighbours == 3:
                    matrix[r][c] = 1
                else:
                    matrix[r][c] = 0

        return matrix
