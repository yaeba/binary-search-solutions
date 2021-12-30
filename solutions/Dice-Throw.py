import functools


class Solution:
    @functools.cache
    def solve(self, n, faces, total):
        if n == 1:
            return int(faces >= total)
        return sum(
            self.solve(n - 1, faces, total - face)
            for face in range(1, faces + 1)
            if (total - face) > 0
        ) % (1e9 + 7)
