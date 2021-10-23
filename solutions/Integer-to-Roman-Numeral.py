class Solution:
    def solve(self, n):
        l = [
            (1000, "M"),
            (900, "CM"),
            (500, "D"),
            (400, "CD"),
            (100, "C"),
            (90, "XC"),
            (50, "L"),
            (40, "XL"),
            (10, "X"),
            (9, "IX"),
            (5, "V"),
            (4, "IV"),
            (1, "I"),
        ]
        res = ""

        while n > 0:
            for (x, c) in l:
                while n >= x:
                    res += c
                    n -= x

        return res
