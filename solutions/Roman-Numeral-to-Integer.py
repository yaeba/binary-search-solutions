class Solution:
    def solve(self, numeral):
        if not numeral:
            return 0

        d = {"I": 1, "V": 5, "X": 10, "L": 50, "C": 100, "D": 500, "M": 1000}
        res = d[numeral[0]]

        # 'I' can come before 'V' and 'X' to make 4 and 9
        # check if next roman is greater than previous
        for a, b in zip(numeral, numeral[1:]):
            if d[b] > d[a]:
                res -= 2 * d[a]
            res += d[b]

        return res
