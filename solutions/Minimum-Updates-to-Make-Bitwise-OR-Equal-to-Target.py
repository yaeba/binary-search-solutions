class Solution:
    def solve(self, a, b, target):
        res = 0

        while a or b or target:
            x, y, z = a & 1, b & 1, target & 1
            if x | y != z:
                res += 2 if x and y else 1
            a, b, target = a >> 1, b >> 1, target >> 1

        return res
