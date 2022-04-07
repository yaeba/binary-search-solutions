import itertools as it


class Solution:
    def solve(self, positions):
        speed = [abs(b - a) for a, b in zip(positions, positions[1:])]
        return max(sum(1 for _ in g) for _, g in it.groupby(speed)) + 1
